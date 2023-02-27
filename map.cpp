#include<bits\stdc++.h>
using namespace std;
int main(){
    map <int,int> m;
    m.insert({1,2});
    m.emplace(5,9);
    m[6]=4;

    cout<<m[1];
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it=m.find(5);
    auto s=*it;
    cout<<(*it).second;

    auto it=m.find(5); //points to the m.end() when element is not present 
    
    return 0;
}