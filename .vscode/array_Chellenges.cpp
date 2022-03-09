#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
    int mx =INT8_MIN;
 int n;
 cout<<"enter number of elements";
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
     cout<<"enter"<<i<<"th element";
     cin>>arr[i];

 }


for (int k=0;k<n;k++){
    mx= max(mx,arr[k]);
    cout<<mx<<endl;

    }

 return 0;
}