// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void colMatrix(vector<vector<int>>matrix,int n, int m ,int j){
    for(int i=0;i<n;i++){
         if(matrix[i][j]==0){
            matrix [i][j]=-1;
    }
}
void rowMatrix (vector<vector<int>> matrix,int n, int m ,int i){
    for(int j=0;j<m;j++){
        if(matrix[i][j]==0){
            matrix [i][j]=-1;
        }
    }
}
vector<vector<int>>zeroMatrix(vector<vector<int>>matrix,int n,int m){
    // if [i][j]==0 so , col -> -1 and row -> -1 and if matrix ==-1 ====> 0
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                colMatrix(matrix,n,m,j);
                rowMatrix(matrix,n,m,i);
                
            }
        }
    }
    
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
             if(matrix[i][j]==-1){
            matrix [i][j]=-0;
        }
    }
    
    
}

int main() {
    vector<vector<int> matrix= {{1,1,1},{1,0,1},{1,1,1}};
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>> ans =zeroMatrix(matrix,n,m);
    
    cout<<"The Final Matrix is :"<<endl;
    
    for(auto it : ans){
        for(auto ele : it)
    }
    
    
    
    


    return 0;
}

