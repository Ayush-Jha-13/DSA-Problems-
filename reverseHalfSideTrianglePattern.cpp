#include<iostream>
using namespace std;

void reverseHalfSideTrianglePattern(int n){
    for (int i = 0; i < n; i++) {
        // Calculate the starting character for the current row
        for (char ch = 'A' + (n - 1) - i; ch <= 'A' + (n - 1); ch++) {
            cout << ch << " ";
        }
        cout << endl; // Move to the next row
    }
}
int main(){
    int n;
    cin>> n;
    reverseHalfSideTrianglePattern(n);
    return 0;
}