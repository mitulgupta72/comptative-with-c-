#include <iostream>
#include <vector>
#include <string>

using namespace std;

int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        return i+1;
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
 cout<<"enter the kay";
 cin>>key;
 cout<<linearSearch(arr,n,key);
 return 0;
}