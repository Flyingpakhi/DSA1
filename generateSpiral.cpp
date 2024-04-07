#include<iostream>
#include<vector>
using namespace std;
void spiral(vector<vector<int>>&matrix,int n){
        int s=1;
        int row_start=0,row_end=n-1;
        int col_start=0,col_end=n-1;
        while(row_start<=row_end && col_start<=col_end){
            //left->right
            for(int c=col_start;c<=col_end;c++){
                matrix[row_start][c]=s;
                s++;
            }
            row_start++;
            if(row_start>row_end){
                break;
            }
            //top->bottom
            for(int r=row_start;r<=row_end;r++){
                matrix[r][col_end]=s;
                s++;
            }
            col_end--;
            if(col_end<col_start){
                break;
            }
            //right->left
            for(int c=col_end;c>=col_start;c--){
                    matrix[row_end][c]=s;
                    s++;
            }
            row_end--;
            if(row_end<row_start){
                break;
            }
            //bottom->top
            for(int r=row_end;r>=row_start;r--){
                matrix[r][col_start]=s;
                s++;
            }
            col_start++;
            if(col_start>col_end){
                break;
            }
        }
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));
    spiral(matrix,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}