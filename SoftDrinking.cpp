#include<iostream>
using namespace std;
int main(){
    /*
    n--no of friends
    k--no of bottles
    l--each bottle has l mililitre of drinks
    c--no of limes
    d--no of slices of each lime
    p--quantity of salt in grams
    nl--amount of drink needed to make a toast
    np--grams of salt needed to make a toast
    */
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    //making a toast
    int total_drink=k*l;
    int total_slice=c*d;
    int salt=n*np;
    int ans=(min(total_drink/nl,min(p/np,total_slice)))/n;
    cout<<ans<<endl;
    return 0;
}