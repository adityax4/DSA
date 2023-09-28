#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5] = {8,9,2,3,1};
    sort(a, a+5);
    for(auto it : a){
        cout<<it<<" ";
    }
    cout<<endl;
    // sort(v.begin(), v.end());

    // sort(a, a+5, greater<int> ); // sorting in descending order

    // sort(a, a+n, comp) // user-defined sorting

    
}