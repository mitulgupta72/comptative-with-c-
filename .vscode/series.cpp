#include <iostream>

using namespace std;
int main(){
 int r;
 cout<<"enter number of rows ";
 cin>>r;

 for(int i=1;i<=r;i++){ 
   if(i==1 || i==r){
     for(int j=0;j<r;j++){
       cout<<"* ";
      } 
      cout<<"\n";
    }
   else{
      cout<<"*";
      for (int k=0;k<2*r-3;k++){
        cout<<" ";
      }    
      cout<<"*\n"; 
    } 
  }






















 



 return 0;
}