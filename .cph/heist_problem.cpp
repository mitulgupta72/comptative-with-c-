#include<iostream>
#include<conio.h>
using namespace std ;

int calc(int D,int d,int P,int Q){
   int n=D/d,sum=0;
        for(int j=0;j<n;j++){
            
            sum+=(P+(j*Q));
        }

    int result = sum*d;
    
      if ((D%d)!=0){
          int left=D%d;
        result+=(left*(P+(n*Q)));
      }

        return result;
}

int main(){
    int T;
    cin>>T;
    for (int i=0;i<T;i++){
        int D,d,P,Q;
        cin>>D>>d>>P>>Q;
       cout<<calc(D,d,P,Q)<<endl;
     
    }
}