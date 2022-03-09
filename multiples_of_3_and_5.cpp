#include <iostream>
using namespace std;
int main()
{
 int i,j,sum=0;
 cout<<"enter the number below which u wish to find sum of multiples of 3 or 5 \n";
 cin>>j;
 for(i=0;i<j;i++)
{
    if(i%3==0||i%5==0)   //or we can also use: (i%3==0||i%5==0)?sum=sum+i:sum=sum+0;             
    sum=sum+i;           //there are many more ways ways to do this simple programs;)
 }
  
cout<<sum;
}
