#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
int T;
int N,K;
cout<<"enter number if test cases";
cin>>T;
cout<<"enter number of teams and then qualifying team";
cin>>N>>K;
cout<<"enter score of teams";
int arr[N];

for(int i=0;i<N;i++){
    cin>>arr[i];
}


for(int i=0;i<N-1;i++)
{
    for(int j=i+1;j<N;j++)
    {
        if(arr[i]<arr[j])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}

int num=0;

for(int i=0;i<N;i++)
{
    if(arr[i]>arr[K] || arr[i]==arr[K]){
        num+=1;
    }
}
cout<<num;

 return num;
}