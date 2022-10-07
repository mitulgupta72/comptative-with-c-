#include<bits\stdc++.h>
using namespace std;
void toh(int n,char src,char dest , char helper){
    if(n==0){
        return;
    }
    toh(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    toh(n-1,helper,dest,src);

}

int main(){
    int n;
    char A,B,C;
    A='a';
    B='b';
    C='c';
    cin>>n;
    toh(n,A,B,C);
    return 0;
}