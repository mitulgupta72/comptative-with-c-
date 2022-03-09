// pointer_implementation to increment a value 
#include<iostream>
#include<conio.h>
using namespace std;

void increment(int *a){
     *a+=1;
     *a++;
}
int main(){
    int a;
    a=2;
    increment(&a);
    cout<<a;

}