#include <iostream>
using namespace std;
int main()
{
  int sum=2,i=1,j=2,k,l;  //sum is directly assigned equals 2 because starts working after i+j;)
  for(k=0;k<4000000;)
 {   
      if(k%2==0)
      {
          sum=sum+k;
         
      } 
      l=i;
      i=j;
      j=l+j;
      k=i+j;
 } 
 cout<<sum; 

}