#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>ans;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ans.push_back(a);
    }
    bool res=false;
    for(int i=0;i<ans.size();i++){
        if(ans[i]==1){
            res=true;
            break;
        }
    }
    if(res==true){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
    return 0;
}