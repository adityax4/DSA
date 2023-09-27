#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);
    cout<<v[0];
    vector<int>::iterator it = v.begin();
    it++;
    cout<< *it;
    vector<int>::iterator it1 = v.end();
    it1--;
    cout<< *it1;
    cout<<v.back();
    cout<<endl;
    for(vector<int>:: iterator it2 = v.begin(); it2<v.end(); it2++){
        cout<<*(it2)<<" ";
    }
    cout<<endl;
    for(auto it2 = v.begin(); it2<v.end(); it2++){
        cout<<*(it2)<<" ";
    }
    cout<<endl;
    for(auto it2 : v){
        cout<<it2<<" ";
    }

}