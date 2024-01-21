#include<bits/stdc++.h>
using namespace std;

int func(int n){
    int x=n,count=0;
    while (x!=0)
    {
        x=x/10;
        count++;
    }
    return count;
}

int main(){
    int n, digits;
    cin>>n;
    digits=func(n);
    cout<<"no. of digits are: "<<digits<<endl;
    return 0;
}
