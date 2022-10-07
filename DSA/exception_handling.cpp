#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    try{
        if(x>18){
            cout<<"pass"<<endl;
        }
        else{
            throw x;
            cout<<"throwed exception"<<endl;
        }
    }
    // catch(int k){
    //     cout<<"exeption: "<<k<<" is less than 18"<<endl;
    // }
    catch(float k){
        cout<<"exeption: "<<k<<" is less than 18"<<endl;
    }
    catch(...){
        cout<<"default exception"<<endl;
    }
    cout<<"after catch";
    return 0;
}