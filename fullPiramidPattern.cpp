#include<iostream>
using namespace std;

void halfPeramidPattern(int n){
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout<< " ";
        }
        //stars
        for(int j=0; j<2*i+1; j++){
            cout<< "*";
        }
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout<< " ";
        }
        cout<< endl;
    }
}

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
    halfPeramidPattern(n);
    reverseHalfPiramidPattern(n);
    return 0;
}