#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
 int n;
 cout<<"enter number of elements";
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
     cout<<"enter"<<i<<"th element";
     cin>>arr[i];

 }
// slectionSort(arr,n);
 
// int selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            } 

        }
    }
    for (int k=0;k<n;k++){
        cout<<arr[k];
    }
// }

 return 0;
}