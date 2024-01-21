#include<bits/stdc++.h>
using namespace std;

int main(){
    // Key and Value
    // unique keys in sorted order (SORTED KEYS)
    map<int, int> m;
    map<int, pair<int, int>> m1;

    m[1]=5;
    m.insert({8,4});
    
    for(auto it: m){
        cout<<it.first<<" "<<it.second;
        cout<<endl;
    }

    cout<<m[1];

    
}