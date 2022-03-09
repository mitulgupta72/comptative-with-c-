#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int T, N, D, C, M,k;
    bool final = true;
    cout << "enter number of test cases";
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N >> D >> C >> M;
        char S[N];
        for (int j = 0; j < N; j++)
        {
            cin>>S[j];
        }
        for (int j = 0; j < N; j++)
        {
            cout<<S[j];
        }
        for(int j=0;j<N;j++){
            k=j;

            
            if(S[j]=="c" && C>0){
                C-=1;
            }
            else if(S[j]=="d" & D>0){
                D-=1;
                C+=M;
            }
            else{
                // goto Label;
                cout<<"sucess";
            }
        }
        // Label:for(int a=k;a<N;a++){
        //     if(S[a]=='d'){
        //         final=false;
        //         break;
        //     }

        // }
    cout<<i<<"=>"<<final;
    }

}