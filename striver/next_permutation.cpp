#include<bits\stdc++.h>
using namespace std;

int main(){
    class Solution{
        public:
        void nextPermutation(vector<int>& nums){
            cout<<next_permutation(begin(nums),end(nums));
        }
    }S;
    vector<int> data={1,4,3,5,2};
    S.nextPermutation(data);
    return 0;
}