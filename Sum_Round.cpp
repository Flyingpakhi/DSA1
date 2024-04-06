#include<iostream>
#include<vector>
using namespace std;
void print(int n){
    int mul=1;
    vector<int>ans;
    while(n>0){
        int last=n%10;
        int val=mul*last;
        if(val>0){
            ans.push_back(val);
        }
        n=n/10;
        mul=mul*10;
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        print(n);
        cout<<endl;
    }
    return 0;
}