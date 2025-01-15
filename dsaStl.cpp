#include<bits/stdc++.h>
using namespace std;

int main(){
    //Pair
    // pair<int, int> p = {1, 3};
    // pair<int, pair<int, int>> p = {1, {2, 3}};
    // pair<int, int> arr[] = {{1, 2}, {3, 5}, {6, 8}};
    // cout<< arr[2].first << endl;

    //Vector
    // vector<int> v(5, 20);
    
    vector<pair<int, int>> v;
    
    v.push_back({1, 5});
    v.emplace_back(6, 7);
    
    vector<int>::iterator it = v.begin();
    it++;
    cout<< v[1].first <<endl;

    return 0;
}
