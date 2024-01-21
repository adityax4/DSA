#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s; //sorted and unique
    s.insert(1);
    s.emplace(2);
    s.insert(5);
    s.insert(2);
    s.insert(4);

    for(auto it : s){
        cout<<it<<" ";
    }
    s.erase(2);
    for(auto it : s){
        cout<<it<<" ";
    }

    cout<<s.count(5);

    // O(logn)
}