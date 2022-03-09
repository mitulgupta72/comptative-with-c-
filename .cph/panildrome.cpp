#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of array u require ";
    cin>>n;
    char arr[n+1];
    cout<<"enter text to be chaked ";
    cin>>arr;
    cout<<arr<<endl;
    int check=1;
   for(int m =0;m<n;m++){
       if(arr[m]!=arr[n-m])
       check=0;
   }
   if(check=0){
       cout<<"not a palindrome ";
   }
   else{
       cout<<"a palindrome"; 
   }
}