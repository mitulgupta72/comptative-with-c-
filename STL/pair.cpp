#include<bits\stdc++.h>
using namespace std;
    void pairware(){
        // pair<int,int> p={1,2};
        // cout<<p.first<<"  "<<p.second;
        pair<int,pair<int,int>> p={1,{2,3}};
        cout<<p.first<<"  "<<p.second.first<<"  "<<p.second.second<<endl;
        pair<int,int> arr[]={{1,2},{3,4},{5,6},{7,8}};
        cout<<arr[1].first;
    }
int main(){
    cout<<"done"<<endl;
    pairware();
    return 0;
}
