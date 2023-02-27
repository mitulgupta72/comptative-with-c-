#include<bits\stdc++.h>
using namespace std;
int main(){
    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(4);
    ls.emplace_front(5);
    for(auto it:ls){
        cout<<it;
    }
    return 0;

}