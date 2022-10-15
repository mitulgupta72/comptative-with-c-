// #include<bits\stdc++.h>
// using namespace std;
// int main(){
//     cout<<"sucess";
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>A(n);
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int ind;
        int ind1=0;
        int ind2=n-1;
        int count=0;
        int one_count=0;
        for(int i=0;i<n;i++){
            if(A[i]==0 && count==0){
                ind1=i;
                count++;

            }
            else if(A[i]==0 && count==1){
                ind2=i;
                if((ind2-ind1+1)>one_count){
                    one_count=ind2-ind1+1;
                    ind=(ind2+ind1)/2;
                    count=0;
                }

            }
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(A[i]==0){
                if(c>one_count){
                    ind=i/2;
                    break;
                }
            }
            else{
                c++;
            }
        }
        c=0;
        for(int i=n-1;i>-1;i--){
            if(A[i]==0){
                if(c>=one_count){
                    ind=(i+n)/2;
                    break;
                }
            }
            else{
                c++;
                if(i==0){
                    ind=n/2;
                }
            }
        }
        cout<<one_count;
        cout<<endl;
        A[ind]=0;
        int sum=0;
        int t=0;
        for(int i=0;i<n;i++){
            if(A[i]==0){
                sum+=(n-i);
                sum+=(t*(n-i));
                t=0;
            }
            else{
                t++;
            }
        }
        cout<<sum;





    }
        return 0;
}