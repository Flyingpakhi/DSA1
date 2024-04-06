#include<iostream>
using namespace std;
int main(){
    /*Tetrahedron. Tetrahedron has 4 triangular faces.
      Cube. Cube has 6 square faces.
      Octahedron. Octahedron has 8 triangular faces.
      Dodecahedron. Dodecahedron has 12 pentagonal faces.
      Icosahedron. Icosahedron has 20 triangular faces.*/
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="Tetrahedron"){
            sum+=4;
        }
        else if(s=="Cube"){
            sum+=6;
        }
        else if(s=="Octahedron"){
            sum+=8;
        }
        else if(s=="Dodecahedron"){
            sum+=12;
        }
        else if (s=="Icosahedron")
        {
            sum+=20;
        }
    }
    cout<<sum<<endl;
    return 0;
}