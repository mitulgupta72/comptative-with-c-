#include<bits/stdc++.h>
using namespace std;

void print_binary(int num){
     for(int i=10;i>=0;i--){
        cout<<((num>>i) & 1);
     }
     cout<<endl;
}

int main(){
    int num;
    cin>>num;
    print_binary(num);

}