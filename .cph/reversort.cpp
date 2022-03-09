#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N,d,f=INT_MAX,cost=0;
    cout<<"enter total number of text cases";
    cin>>T;
    for(int i=1;i<T;i++){
        
        cout<<"enter number of elements you want to enter u=in this text case";
        cin>>N; 
        int arr[N];
        for(int j=0;j<N;j++){
            cin>>arr[N];
        }

        for(int r=1;r<=N;r++){
            for(int t=r;t<=N;t++){ 
                if(arr[t]<f)
                d=t;
            }
            sort(arr[r],arr[d]);
            cost+=(d-(r+1));
        }
        cout<<"#"<<i<<cost<<endl;
        cost=0;
    }
}