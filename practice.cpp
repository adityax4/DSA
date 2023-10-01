#include<bits/stdc++.h>
using namespace std;

void printfun(int i, int n){
   if(i>n) return;
   printfun(i+1, n);
   cout<<i<<" ";
}

int main(){
   int n;
   cin>>n;
   printfun(n,n);
}