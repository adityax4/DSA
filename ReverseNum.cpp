#include<bits/stdc++.h>
using namespace std;

int revnum(int n){
    int x=n, revNumber=0;
    while (x!=0)
    {
        int digit = x%10;
        revNumber = revNumber*10 + digit;
        x=x/10; 
    }
    return revNumber;
}

int main(){
    int n;
    cin>>n;
    int rev = revnum(n);
    cout<<"The reverse is "<<rev;
}
