#include<bits/stdc++.h>
using namespace std;
vector<int> sparsematrix(vector<vector<int>> matrix,int n,int m){
    vector<int> arr;
    int left=0,right=m,top=0,bottom=n;
    while(left<right && top<bottom){
        for(int i=left;i<right;i++){
            arr.push_back(matrix[top][i]);
        }
        top++;
        for(int p=top;p<bottom;p++){
            arr.push_back(matrix[p][right-1]);
        }
        right--;
        if(left<right){
            for(int q=right-1;q>=left;q--){
                arr.push_back(matrix[bottom-1][q]);
            }
        }
        bottom--;
        if(top<bottom){
            for(int r=bottom-1;r>=top;r--){
                arr.push_back(matrix[r][left]);
                cout<<matrix[left][r]<<"__";
            }
            
        }
        
        left++;
    }
    return arr;
}
int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> arr = sparsematrix(matrix,3,3);
    for(int p=0;p<arr.size();p++){
        cout<<arr[p]<<endl;
    }
    
    
}
