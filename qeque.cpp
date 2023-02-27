#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(1);
    for(auto i:dq){
        cout<<i;
    }
    cout<<endl;
    dq.emplace_back(2);
    
    for(auto i:dq){
        cout<<i;
    }
    cout<<endl;
    dq.push_front(3);
    
    for(auto i:dq){
        cout<<i;
    }
    cout<<endl;
    dq.emplace_front(4);
    
    for(auto i:dq){
        cout<<i;
    }
    cout<<endl;
    int it=dq.front();
    cout<<it<<endl;
    cout<<dq.back();
return 0;
}

