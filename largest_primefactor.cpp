#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,num,a,m,k=0,ans;
    cout<<"enter the number of which u wish to find out the biggest prime factor \n";
    cin>>num;
  for(a=2;a<num;a++) 
   {
     for(m=3;m<a;++m)
     {  if(a%m==0)
         k=1;
     }
    if(k==0 && a%num==0)
     {
         ans=a;

     }
   
   }
  if(num==1||num==0)
  {
    cout<<"0 and 1 are not included in prime no neither they have and prime factor";
    k=1;
  }
 
    cout<<"biggest prime factor is ="<<ans<<endl;

  
    
  
 
}