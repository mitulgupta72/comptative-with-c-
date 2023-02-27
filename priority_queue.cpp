#include<bits\stdc++.h>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(2);
    pq.push(5);
    pq.push(3);
    pq.emplace(8);
    // cout<<pq.top()<<endl;
    while(!pq.empty()){
        // cout<<pq.top()<<endl;
        pq.pop();
    }
    // for(auto i : pq){
    //     cout<<i;
    // }
    priority_queue<int, vector<int>,greater<int>> mpq;
    mpq.push(2);
    mpq.push(5);
    mpq.push(3);
    mpq.emplace(9);
    cout<<mpq.top()<<endl;
    while(!mpq.empty()){
    cout<<mpq.top()<<endl;
    mpq.pop();
    }

    return 0;
}