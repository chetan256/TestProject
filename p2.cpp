#include<iostream>
#include<stdio.h>
#include "p1.cpp"
using namespace std;
int main()
{
  FILE *f;
  int a,b,val,i
  f=fopen("testresults.txt","r");
  if(f==NULL)
  {
      cout<<"error\n";
  }
  else{
  i=0;
  while(!feof(f))
  {
      fscanf(f,"%d %d %d",&a,&b,&val);
      if(div(a,b)==val)
        cout<<"Test Case"<<i<<" Passed\n";
      else
        cout<<"Test Case"<<i<<" Failed\n";
    i++;
  }
}
  return 0;
  }

