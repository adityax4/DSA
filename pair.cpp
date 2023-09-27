#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int> p = {1,2};
    cout<<p.first;
    pair<int,pair<int,int>> a = {3,{4,8}};
    cout<<a.second.second;
    pair<int, int> arr[] = {{1,2}, {4,5}, {6,7}, {9,1}};
    cout<<arr[0].first<<" "<<arr[3].second;
}