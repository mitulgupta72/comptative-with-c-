#include <bits\stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,it=0;
	cin>>t;
	for (int k=0;k<t;k++){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int count1=0,count0=0;
	    
	   //while(n){
	   
	    for(int j=2;j<=n;j+=2){
	        for(int i=1;i<=n-j+1;i++){
	            for(int k=0;k<j;k++){
	                
	            if(arr[i]==0){
	                count0++;
	            }
	            else
	            count1++;
	            }
	        }
	        if(count1==count0){
	            it++;
	        }
	    }
	   
	   // n--;
	   // }
	   cout<<it;
	    
	}
	return 0;
}
