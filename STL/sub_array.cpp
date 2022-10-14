#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
        int count=0;
    cin>>t;
    for(int i=0;i<t;i++){
        int s;
        cin>>s;
        int arr[s];
        for(int j=0;j<s;j++){
            cin>>arr[j];
        }

    int ind=0,m=0,ind1=0;
        for(int k=0;k<s;k++){
            if(arr[k]==1){
              ind++;
              m=k;
              if(ind==2){
                arr[k]=0;
                ind1=1;
              }
            }
        }
        if(ind1==0){
            arr[m]=0;
        }
        for(int u=0;u=<s;u++){
            for(int y=0;y<s-u;y++){
                for(int r=0;r<u;r++){
                    if(arr[r]==0){
                        count++;
                    }
                }
            }
        }
        cout<<count<<endl;
    }

     





    return 0;
}