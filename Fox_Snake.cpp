#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    bool flag=false;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            flag=!flag;
        }
        for(int j=1;j<=m;j++){
            if(i%2==0 && flag==true && j!=m){
                cout<<".";
            }
            else if(i%2==0 && flag==false && j!=1){
                cout<<".";
            }
            else{
                cout<<"#";
            }
        }
        cout<<endl;
    }
}