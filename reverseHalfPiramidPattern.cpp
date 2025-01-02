#include<iostream>
using namespace std;

void reverseHalfPiramidPattern(int n){
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<i; j++){
            cout<< " ";
        }
        //stars
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<< "*";
        }
        //spaces
        for(int j=0; j<i; j++){
            cout<< " ";
        }
        cout<< endl;
    }
}
int main(){
    int n;
    cin>> n;
    reverseHalfPiramidPattern(n);
    return 0;
}