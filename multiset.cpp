#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> ms; // Only SORTED not unique
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    for(auto it: ms){
        cout<<it<<" ";
    } 

    ms.erase(ms.find(1));
    
    for(auto it: ms){
        cout<<it<<" ";
    } 


    ms.erase(1);

    cout<<ms.count(1);
}