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
//insertion sort
 
 for (int i=1;i<n;i++){
     int current=arr[i];
     int j=i-1;
     while(arr[j]>current && j>=0)
     {
         arr[j+1]=arr[j];
         j--;

     }
     arr[j+1]=current;

 }
  
    for (int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
// }

 return 0;
}