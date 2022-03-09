#include<iostream>
#include<conio.h>
using namespace std ;

int Coconut(int xa,int xb,int Xa,int Xb){
     int A=Xa/xa;
        if((Xa%xa)!=0){
            A+=1;
        }
    int B=Xb/xb;
        if((Xb%xb)!=0){
            B+=1;
        }

        return A+B;
}

int main(){
     int T;
    
    cin>>T;
 
    for(int i=0;i<T;i++){
        int xa,xb,Xa,Xb;
        cin>>xa>>xb>>Xa>>Xb;
      cout<<Coconut(xa,xb,Xa,Xb)<<endl;
    }

   
}

