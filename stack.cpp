#include<bits\stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(5);
    st.push(6);
    stack<int> st1;
    st1.push(52);
    st1.push(62);
    stack<int> st2;
    st2.push(5);
    st2.push(6);
    st.emplace(7);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st1.swap(st2);
    for(auto i:st1){
        cout<<i;
    }
    return 0;
}