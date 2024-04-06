#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int row=5;
    // int col=5;
    vector<vector<int>>arr(5,vector<int>(5));
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    int val=0;
    bool fact=false;
    for(int i=0;i<5;i++){
        if(fact==true){
            break;
        }
        // cout<<"hello"<<endl;
        for(int j=0;j<arr[i].size();j++){
            if(arr[i][j]==1){
                val=abs(i-2)+abs(j-2);
                fact=true;
                break;
            }
        }
    }
    cout<<val<<endl;
    return 0;
}