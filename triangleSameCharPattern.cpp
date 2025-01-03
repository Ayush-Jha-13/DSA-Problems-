#include<iostream>
using namespace std;

void triangleSameCharPattern(int n){
    for(int i=0; i<n; i++){
        char ch = 'A' + i;
        for(int j=0; j<=i; j++){
            cout<< ch << " ";
        }
        cout<< endl;
    }
}
int main(){
    int n;
    cin>> n;
    triangleSameCharPattern(n);
    return 0;
}