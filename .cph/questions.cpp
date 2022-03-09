//given an array of size N.task is to find out the first repeating element in the array of integers,
//i.e. an element that occurs more than once and whose index of first occurence is smallest.
#include<iostream>
#include <conio.h>
#include<climits>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int idx[N];
    for (int i=0;i<N;i++){
        cin>>idx[i];
    }
    int minidx=INT_MAX;
    for(int i=0;i<N;i++){
        if(idx[arr[i]]!=-1){
            minidx = min(minidx,idx[arr[i]]);
        }
        else(idx[arr[i]]=-1){
            idx[arr[i]]=i;
        }
    }
    
    if (minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else(minidx! =INT_MAX){
    cout<<minidx;
    }
    return 0;
}