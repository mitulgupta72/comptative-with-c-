#include<bits/stdc++.h>
using namespace std;
void setZeroes1(vector<vector<int>>& matrix) {
        int rows=matrix.size(),cols=matrix[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    int ind=i-1;
                    while(ind>=0){
                        if(matrix[ind][j]!=0){
                            matrix[ind][j]=-1;
                        }
                    }
                    ind=i+1;
                    while(ind<rows){
                        if(matrix[ind][j]!=0){
                            matrix[ind][j]=-1;
                        }
                    }
                    ind=j-1;
                    while(ind>=0){
                        if(matrix[i][ind]!=0){
                            matrix[i][ind]=-1;
                        }
                    }
                    ind=j+1;
                    while(ind<cols){
                        if(matrix[i][ind]!=0){
                            matrix[i][ind]=-1;
                        }
                    }                   
                }
            }
        }
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
            if(matrix[i][j]<0){
                matrix[i][j]=0;
            }
            }
        }
        
    }

void setZeroes2(vector<vector<int>>& matrix) {
        int rows=matrix.size(),cols=matrix[0].size();
        vector<int> dummy1(rows,-1),dummy2(cols,-1);
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    dummy1[i]=0;
                    dummy2[j]=0;
                }
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(dummy1[i]==0||dummy2[j]==0){
                    matrix[i][j]=0;
                }

            }
        }
    }



int main(){
    setZeroes()
    return 0;
}