#include<bits/stdc++.h>
using namespace std;

int main(){

    int countBits = __builtin_popcount(15); // count no. of ones, if 15, whose binary 1111, this will give 4
    cout<<countBits;

    cout<<endl;

    string s = "12345";
    sort(s.begin(), s.end());

    do
    {
        cout<<s<<endl;
    } while (next_permutation(s.begin(), s.end()));

    int a[5] = {1,10,2,3,5};
    int mini = *min_element(a, a+5);
    int maxi = *max_element(a, a+5);
    cout<<mini<<endl;
    cout<<maxi<<endl;
    
}