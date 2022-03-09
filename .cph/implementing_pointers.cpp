// using pointers in function to actually change the value of a variable 

#include<iostream>
#include<conio.h>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    a=2;
    b=3;
    swap(&a,&b)   //or we can also directly pass the adressess
    int *aptr=&a;      
    int *bptr=&b;
    cout<<aptr;
    swap(aptr,bptr);      //passing the adress as a value to the function 
    cout<<a<<"  "<<b;
}