#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int temp=n;
        vector<int>v;
        //by one colour how many parts we can colour
        int res=n/m;
        int val=res*m;
        // if n=12,m=7,then val!=res.rest of the part will be coloured by different
        // colours like ans=n-val=5 then 5 parts will color by 5 diff color.
        // as alice wants to paint the ribbon in such a way that Bob cannot make all
        // parts have the same color.
        int ans=n-val;
            for(int i=0;i<m;i++){
                v.push_back(res);
            }
            // if ans>0,then push one colour to every index from last
            for(int i=0;i<ans;i++){
                v[m-i-1]+=1;
            }
            v[v.size()-1]=-1;
            int i=0;
            // try to find out how many parts can be color by last colour with k value
            
            while(k-v[i]>=0){
                k=k-v[i];
                v[i]=-1;
                i++;
                if(i>v.size()-1){
                    break;
                }
            }
            bool flag=true;
            for(auto i:v){
                if(i!=-1){
                    flag=false;
                    break;
                }
            }
            if(flag==true){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    return 0;
}