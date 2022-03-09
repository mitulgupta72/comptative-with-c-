#include<iostream>
using namespace std;
int main()
{  int i,n,a=0,j=0;

if (j<1)

 {  for(i=0;i<10;i++) 
   {
     i>4 ? cout<<i<<endl : cout<<"value lesser than 4\n";
     
   }
   j=j+1;
 }
  if (j<2)
        cout<<"my name is mitul gupta \n";      
      else 
        cout<<"what is your roll number \n";
  cin>>n;
  cout<<n<<endl; 
  



do
{
  
a++;
if(a==3)
break;


cout<<"value of a ="<<a<<"\n";
}
while( a==0 || a<5);
}