#include<bits\stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(3);
    s.emplace(5);
    s.emplace(4);
    s.emplace(2);
    s.emplace(1);
    //begin() end() rbegin() rend() size()
    // empty() swap() are same 
    auto it= s.find(4);  //returns address of element 4
    cout<<*it;
    auto it2= s.find(6);      //returns s.end() for elements not present in set
    cout<<*it2;
    auto i=s.end();
    i--;
    i--;
    i--;
    cout<<*(i)<<endl;
    s.erase(3);
    for(auto i : s)
    {
        cout<<i;
    }


    return 0;
}


    