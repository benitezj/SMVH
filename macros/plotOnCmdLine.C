void plotOnCmdLine(TH1*h){
  if(!h){cout<<"histogram is NULL"<<endl; return;}
  cout<<"Plotting on command line:"<<h->GetName()<<endl;
  
  Int_t max=h->GetBinContent(h->GetMaximumBin());
  Int_t min=0;
  Int_t nbins=h->GetNbinsX();
  Int_t nbinsy=10;
  if(max<=0.0)return;


  //
  int ypower=floor(log10(max));
  cout<<"   x10^"<<ypower<<endl;

  //top horizontal line
  cout<<"   ";
  for(Int_t b=0;b<=nbins;b++)cout<<"*";
  cout<<"*"<<endl;


  
  for(Int_t l=0;l<nbinsy;l++){
    if(l==0) printf("%1.1f",max/pow(10,ypower));
    else cout<<"   ";
    
    //left vertical line
    cout<<"*";

    //Bin contents
    for(Int_t b=1;b<=nbins;b++){
      if(floor(nbinsy*h->GetBinContent(b)/max)==(nbinsy-l))
	cout<<"*";
      else
	cout<<" ";
    }

    //right vertical line
    cout<<"*";


    //stats info
    if(l==2)cout<<"  mean = "<<h->GetMean();
    if(l==3)cout<<"  rms = "<<h->GetRMS();
    if(l==4)cout<<"  integral = "<<h->Integral();  
    //if(l==9)cout<<min;

    cout<<endl;

  }


  //bottom line
  cout<<"0.0";
  for(Int_t b=0;b<=nbins;b++)cout<<"*";
  cout<<"*"<<endl;


  //axis numbers
  float xl=h->GetXaxis()->GetXmin();
  float xm=h->GetXaxis()->GetXmax();
  int power= floor(log10(xm));
  cout<<"  ";
  for(Int_t b=1;b<=nbins;b++){
    if(b==1){printf("%1.1f",xl/pow(10,power)); b+=2;}
    else if(b==nbins/4){printf("%1.1f",(xl+(xm-xl)/4)/pow(10,power)); b+=2;}
    else if(b==nbins/2){printf("%1.1f",(xl+(xm-xl)/2)/pow(10,power));b+=2;}
    else if(b==3*nbins/4){printf("%1.1f",(xl+3*(xm-xl)/4)/pow(10,power)); b+=2;}
    else if(b==nbins){printf("%1.1f",xm/pow(10,power)); b+=2;}
    else cout<<" ";
  }
  cout<<" x 10^"<<power<<endl;


  ///x axis title
  for(Int_t b=1;b<=nbins;b++)
    if(b==nbins/2)cout<<h->GetTitle();
    else cout<<" ";
  cout<<endl;

}
