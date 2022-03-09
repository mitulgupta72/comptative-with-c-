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
//bubble sort 
int counter=0;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }counter++;
    }
  
    for (int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
// }

 return 0;
}