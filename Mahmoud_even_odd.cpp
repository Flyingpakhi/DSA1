#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //odd-even==>odd
    //if it is even then mah will take whole and wins
    //n is odd then whatever mah takes as even after subtracting we get odd number
    //which will then take by ehab as a whole and ehab will win.
    if(n%2==0){
        cout<<"Mahmoud"<<endl;
    }
    else{
        cout<<"Ehab"<<endl;
    }
    return 0;
}