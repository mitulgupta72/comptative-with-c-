//find the word of maximum length in a sentance 
#include<iostream>
#include <conio.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of sentence u want";
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i=0,curLen=0,maxLen=0;
    int st=0,maxst=0;
    while(1){
        if(arr[i]==' ' || arr[i]=='\0')
        { 
            if(maxLen<curLen){
            maxLen=curLen;
            maxst=st;
            }
            curLen=0;
        }
        else
        curLen++;

        st=i+1;
        if(arr[i]=='\0'){
            break;
        }
        
        i++;
    }
    cout<<maxLen;
    for(int i=0;i<maxLen;i++){
        cout<<arr[i+maxst];
    }

} 