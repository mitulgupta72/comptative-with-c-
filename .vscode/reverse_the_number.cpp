#include <iostream>
using namespace std;
int main()
{
    int T, n;
    cin>>T;
            int k=0;
    for (int i = 0; i < T; i++)
    {
        cin>>n;
        while(n>0){
            int temp=(n%10);
            n=n/10;
            // int m=1;
            // cout<<temp;
            k+=temp;
            k*=10;
    // m*=10;

        }
        cout<<k/10<<endl;
        k=0;
    }
}