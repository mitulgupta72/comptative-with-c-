#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <climits>
using namespace std;

void sort(int arr[],int n){
   for(int i=0;i<n-1;i++){
     for(int j=i+1;j<n;j++){
       if(arr[i]>arr[j]){
         int temp;
         temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
        }
      }
    }
}
 
 int binary_search(int arr[],int n,int key){
   int s=0,e=n,mid=(s+e)/2;
   while(s<=e){
    if(arr[mid]==key){
      return mid;
    }
    else if (arr[mid]<key){
      s=mid+1;
    }
    else{
      e=mid-1;
    }
   }
   return -1;
  }
 
 int main(){
    int n;
   cout<<"enter size of array";
   cin>>n;
   int arr[n],key;
   cout<<"enter key to be serched ";
   cin>>key;
   for (int i = 0; i < n; i++)
     cin>>arr[i];
   /*
  
   */
   sort(arr,n);
    
    for(int i=0;i<=n-1;i++){
      cout<<arr[i]<<" ";
    }cout<<endl;
    
    cout<<binary_search(arr,n,key);
   }
 