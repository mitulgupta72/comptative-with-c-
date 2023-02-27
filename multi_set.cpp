#include<bits\stdc++.h>
using namespace std;
int main(){
    multiset<int> st;
    st.insert(2);
    st.insert(3);
    st.insert(3);
    st.insert(3);
    st.insert(5);
    st.insert(5);
    st.insert(1);
    // st.erase(st.find(3));
    // st.erase(st.find(3),st.find(3)+2);
    for(auto i=st.begin();i!=st.end();i++){
        // cout<<*(i);
    }
    cout<<st.count(5);
    // auto i=st.begin(); 
    // while(i!=st.end()){
    // cout<<*i;
    // i++;

    // } 
    return 0;
}