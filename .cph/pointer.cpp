#include<iostream>
#include<conio.h>
using namespace std;
//by using pointers we can have adress of a vaiable 
//also can change value of variable 
int main(){
    int a=10;
    int *b=&a;
    // int b=8;
//     //  cout<<b<<" "<<*b<<endl;  //prints adress then value 
//      b+=1;          
//     //  cout<<b<<endl ;
//      int arr[3]={1,2,3};
//     //  cout<<arr[0]<<endl;
//     int *aptr=arr;
//     for(int i=0;i<3;i++){
//         // cout<<*aptr<<endl;
//         cout<<*(arr+i);     //increments the index of array and prints it ;
//         // aptr++;   //increment of adress by four(size of int) byte
//     }
//  //cout<<aptr<<endl;
 // cout<<*aptr;

 //#pointer ti pointer 
 int **c=&b;
 cout<<*c<<"   "<<**c;
}