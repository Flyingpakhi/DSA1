#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int value=0;
    while(n--){
        string op;
        cin>>op;
        if(op[1]=='+'){
            value++;
        }
        else{
            value--;
        }
    }
    cout<<value<<endl;
    return 0;
}