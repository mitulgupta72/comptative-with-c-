#include<bits\stdc++.h>
using namespace std;

int main(){
    int num =8;
    // cout<<"memory add  "<<&num;
    int *p=&num;
    // cout<<p<<"\n"<<*p<<endl;
    double k=4.34;
    auto *p1=&k;
    // cout<<p1;
    cout<<"size: "<<sizeof(p1);
    return 0;
}