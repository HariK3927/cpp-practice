/*Create a class called 'Matrix' containing constructor that initializes the number of rows and the number of columns of a new Matrix object. The Matrix class has the following information:
1 - number of rows of matrix
2 - number of columns of matrix
3 - elements of matrix (You can use 2D vector)
The Matrix class has functions for each of the following:
1 - get the number of rows
2 - get the number of columns
3 - set the elements of the matrix at a given position (i,j)
4 - adding two matrices.
5 - multiplying the two matrices
You can assume that the dimensions are correct for the multiplication and addition.*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Matrix{
    private:
        int rows,columns;
        vector<vector<int>> A;
    public:
        Matrix(int a ,int b):rows(a),columns(b),A(rows,vector<int>(columns)){
            int rows=a;
            int columns=b;
        }
        vector<vector<int>> set(){
            for(int i=0;i<rows;i++){
                for(int j=0;j<columns;j++){
                    cout<<"set"<<i<<j<<"element"<<endl;
                    cin>>A[i][j];
                }
            }
            return A;
        }
        void display(vector<vector<int>> A){
            cout<<"displaying the matrix"<<endl;
            for(int i=0;i<rows;i++){
                for(int j=0;j<columns;j++){
                    cout<<A[i][j]<<endl;
                }
            }
            
        }
        vector<vector<int>> addition(vector<vector<int>> A1,vector<vector<int>> A2){
            vector<vector<int>> A3(rows,vector<int>(columns));
            //A[1] means 2nd row ,but we cannot access column //directly
            for(int i=0;i<rows;i++){
                for(int j=0;j<columns;j++){
                    A3[i][j]=A2[i][j]+A1[i][j];
                }
            }
            cout<<"addition result"<<endl;
            display(A3);
            return A3;
            
        }
        vector<vector<int>> multiplication(vector<vector<int>> A1,vector<vector<int>> A2){
            vector<vector<int>> A4(A1.size(),vector<int>(A2[0].size(),0));
            if(A1[0].size()==A2.size()){
                for(int i=0;i<A1.size();i++){
                    for(int j=0;j<A2[0].size();j++){
                         for(int p=0;p<A2.size();p++){
                             A4[i][j]=A4[i][j]+(A1[i][p]*A2[p][j]);
                         }
                    }
                }
            }
            cout<<"multiplication result"<<endl;
            display(A4);
            return A4;
            
        }
    

    
};
int main(){
    Matrix A(2,2);
    
    vector<vector<int>> A1=A.set();
    A.display(A1);
    vector<vector<int>> A2=A.set();
    A.display(A2);
    A.addition(A1,A2);
    A.multiplication(A1,A2);
}
