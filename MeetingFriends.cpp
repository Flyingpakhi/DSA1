#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    //take the median value;
    int maxi=max(x1,max(x2,x3));
    int mini=min(x1,min(x2,x3));
    int ans=0;
    if(x1!=maxi && x1!=mini){
        ans=x1;
    }
    else if(x2!=maxi && x2!=mini){
        ans=x2;
    }
    else{
        ans=x3;
    }
    int res=abs(x1-ans)+abs(x2-ans)+abs(x3-ans);
    cout<<res<<endl;
    return 0;
}