#include<iostream>
#include<string>
using namespace std;
int main(){
    string st;
    cin>>st;
    for(int i=0;i<st.length();i++){
        int val=st[i]-'0';
        if(val>=5){
            st[i]='0'+(9-val);
        }
    }
    if(st[0]=='0'){
        st[0]='9';
    }
    cout<<st<<endl;
    return 0;
}