#include<bits/stdc++.h>
using namespace std;
int main(){
    int maxi=0,mini=0;
    int maxva=0,minva=110;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        if(a>maxva){
            maxi=i;
            maxva=a;
        }
        if(a<=minva){
            mini=i;
            minva=a;
        }
    }
    // cout<<maxi<<mini<<endl;
    //when max index > min index
    //overlap happens
    int ans=0;
    if(maxi>mini){
        ans=(maxi-1)+(n-mini)-1;
    }
    else{
        ans=(maxi-1)+(n-mini);
    }
    cout<<ans<<endl;
    return 0;
}