#include<bits/stdc++.h>
using namespace std;
vector<int> SpiralMatrix(vector<vector<int>> &matrix,int n,int m){
    int top=0,bottom = n-1;
    int left=0,right = n-1;
    vector<int> ans;
    while(left<=right && top<=bottom){
    for(int i=left;i<=right;i++){
        ans.push_back(matrix[top][i]);
    }
    top++;
    for(int i = top;i<=bottom;i++){
        ans.push_back(matrix[i][right]);
    }
    right--;
    if(left<=right){
        for(int i=right;i>=left;i--){
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;
    }
    if(top<=bottom){
        for(int i=bottom;i>=top;i--){
            ans.push_back(matrix[i][left]);
        }
        left++;
    }
}
return ans;
}