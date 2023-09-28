#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls;
    ls.emplace_back(1);
    ls.push_back(2);
    ls.emplace_front(5);
    for(auto it: ls){
        cout<<it<<" ";
    }

    //deque
    deque<int> dq;
    //front,back
    //pop front, pop back

    
}