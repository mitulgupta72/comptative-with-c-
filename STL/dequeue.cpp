#include<bits\stdc++.h>
using namespace std;

void explainDeque(){
deque<int> dq;
dq.push_back(5);
dq.emplace_back(4);
dq.push_front(3);
dq.emplace_front(2);
for(dq:it){
    cout<<it;
}

}
int main(){
    explainDeque();
    return 0;
}