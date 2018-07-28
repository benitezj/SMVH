#!/usr/bin/python

import os, math, sys, string, ROOT
import hashlib
from operator import itemgetter
ROOT.gROOT.SetBatch(True)

# Script for extracting initial number of events and sum of weights
# from CxAODs, created from xAODs or DxAODs.
# The current run directory is searched for the CxAODs.
# Alternatively a sampleListFile can be given.


out_file_md5 = "undefined"

def main(argv):

  sampleListFile = ""
  if len(argv) == 0:
    print "Scanning current directory for root files and trying to extract yields..."
  elif len(argv) == 1:
    sampleListFile = argv[0]
    print "Trying to extract yields from files listed in '" + sampleListFile + "'..."
  else:
    print "Usage: python $ROOTCOREBIN/../FrameworkExe/scripts/count_Nentry_SumOfWeight.py [sampleListFile]"
    return
  
  nrj = [
    "13TeV",
    ]
  
  counts = {}
  
  # prepare counter
  for i_nrj in nrj :
    counts[i_nrj] = []
  
  # check for valid file list file
  if sampleListFile is not "" and not os.path.isfile(sampleListFile):
    print "Error: File '" + sampleListFile + "' does not exist!"
    return
  
  # check for valid output directory
  yieldDir = "./FrameworkSub/data/"
  copyFilesMD5 = False
  if sampleListFile is not "":
    if os.path.isdir(yieldDir):
      copyFilesMD5 = True
    else:
      print "Warning: Directory '" + yieldDir + "' does not exist, can't copy output files!"
  
  # copy file by appending its md5sum (first 10 characters) to the name
  md5sum = ""
  global out_file_md5
  if copyFilesMD5:
    md5sum = hashlib.md5(open(sampleListFile, 'rb').read()).hexdigest()
    if len(md5sum) > 10:
      md5sum = md5sum[:10]
    out_file_md5 = yieldDir + 'yields.txt.' + md5sum
    if os.path.isfile(out_file_md5):
      print "File '" + out_file_md5 + "' exists already, skipping yield counting."
      return
  
  # compile file list
  fileList = []
  if sampleListFile is "":
    #for subdir, dirs, files in os.walk(".") :
    for subdir, dirs, files in os.walk(".", followlinks=True) :
      for file in files :
        fileList.append(os.path.join(subdir, file))
        #print os.path.join(subdir, file)
  else:
    files = open(sampleListFile)
    for file in files :
      fileList.append(file.rstrip())
      #print file.rstrip()
    
  
  # loop over root files and count
  for my_file in fileList :

    # skip data for this check
    if "data" in my_file :
      continue

    # root file?
    if not ".root" in my_file :
      print "Skipping non-root file", my_file
      continue

    # energy
    curr_nrj = "unknown"
    for i_nrj in nrj :
      if i_nrj in my_file :
        curr_nrj = i_nrj
    if "unknown" in curr_nrj :
      print "Energy not defined, skipping file", my_file
      continue

    # mc_channel_number
    start = string.find(my_file, curr_nrj + ".") + len(curr_nrj) + 1
    end = string.find(my_file, ".", start)
    if start < 0 or end < 0 or end - start < 2 :
      print "mc_channel_number not defined, skipping file", my_file
      continue
    mc_channel_number = my_file[start : end]

    # sample_name
    start = end + 1
    end = string.find(my_file, ".", start)
    sample_name = "unknown"
    if start < 0 or end < 0 or end - start < 2 :
      print "warning: sample name not defined for file", my_file
    sample_name = my_file[start : end]

    # read counts
    f = ROOT.TFile.Open(my_file,"read")
    h = f.Get("MetaData_EventCount")
    if not h:
      print "warning: MetaData_EventCount not found, skipping file", my_file
      continue

    #Collection tree info
    T = f.Get("CollectionTree")
    if not T:
      print "warning: CollectionTree  not found, skipping file", my_file
      continue

    # from DxAOD metadata
    n_entries = h.GetBinContent(1)
    n_selout_entries = h.GetBinContent(3)
    n_sum = h.GetBinContent(4)
    # events in CollectionTree
    n_Tree = T.GetEntries()
 
    frac = 0.
    if n_selout_entries > 0:
      frac = n_Tree/n_selout_entries
    

    #print "Have", curr_nrj, mc_channel_number, n_entries, n_selout_entries, n_sum, sample_name, my_file
    if frac != 1.0 :
      print mc_channel_number, frac , n_selout_entries, n_Tree,  my_file



    f.Close()

if __name__ == "__main__":
   main(sys.argv[1:])
