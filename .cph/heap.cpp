#include<iostream>
using namespace std;
    int main(){
    int a=10;
    int *p =new int();
    *p=10;
    cout<<p<<"   "<<*p<<endl;
    delete(p);
    cout<<p<<endl;
    p= new int[4];
    *p=5;  
    cout<<*p;
    delete[]p;
    p=NULL; 
 return 0;

}