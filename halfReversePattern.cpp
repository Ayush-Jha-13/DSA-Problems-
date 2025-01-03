#include<iostream>
using namespace std;

void halfReversePattern(int n) {
    int spaces = 2 * (n - 1);
    for(int i=1; i<=n; i++){
        //Num
        for(int j=1; j<=i; j++){
            cout<< j;
        }
        //Spaces
        for(int j=1; j<=spaces; j++){
            cout<< " ";
        }
        // Num
        for(int j=i; j>=1; j--){
            cout<< j;
        }
        cout<< endl;
        spaces -= 2;
    }
}
int main() {
    int n;
    cin>> n;
    halfReversePattern(n);
    return 0;
}