#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q; //FIFO
    q.push(1); //1,2,4,5
    q.push(2);
    q.push(4);
    q.emplace(5);

    q.back() += 5;
    cout<<q.back();

    cout<<q.front();

    q.pop();
    cout<<q.front();

    // O(1)
}