#include<bits\stdc++.h>
using namespace std;
// parametrised recursion 
void fact(int n,int ans){        
    if(n<1){
        cout<<ans<<"hb";
        return;
    }
    fact(n-1,ans+n);
}
int main(){
    int n;cin>>n;
    fact(n,0);
    return 0;
}


