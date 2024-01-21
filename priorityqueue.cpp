#include<bits/stdc++.h>
using namespace std;

int main(){
    // MAX HEAP
    priority_queue<int> pq; //high priority on top
    pq.push(2);
    pq.push(5);
    pq.push(6);
    pq.push(3);
    pq.emplace(8);

    cout<<pq.top();
    pq.pop();
    cout<<pq.top();

    cout<<endl;

    //Minimum at top 
    // MIN HEAP
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5);
    pq1.push(8);
    pq1.push(2);
    pq1.push(6);
    pq1.emplace(1);

    cout<<pq1.top();
    pq1.pop();
    cout<<pq1.top();

    // PUSH AND POP -> O(logn)
    // TOP -> O(1);
}