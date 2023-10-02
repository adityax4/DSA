#include<bits/stdc++.h>
using namespace std;

bool func(string s, int i, int n){
   if(i>=n){
      return true;
   }
   if(s[i]!=s[n-i-1]){
      return false;
   }
   return func(s, i+1, n);
}

int main(){
   string s;
   cin>>s;
   cout<<func(s, 0, s.length());
}