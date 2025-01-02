#include<iostream>
using namespace std;

void reverseTriangleNumPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<< j << " ";
        } 
        cout<< endl;
    } 
}
int main(){
    int n;
    cin>> n;
    reverseTriangleNumPattern(n);
    return 0;
}