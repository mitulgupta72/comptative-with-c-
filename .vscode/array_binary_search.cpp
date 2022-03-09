#include <iostream>
#include <vector>
#include <string>

using namespace std;

int BinarySearch(int arr[],int n,int key){
    int s=1,e=n;
    // cout<<"dfdfd";
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid-1]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else {
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
 int n,key;
 cout<<"enter number of elements";
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
     cout<<"enter"<<i<<"th element";
     cin>>arr[i];

 }
 cout<<"enter the key";
 cin>>key;
 cout<<BinarySearch(arr,n,key)<<endl;
 return 0;
}