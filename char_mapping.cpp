#include<bits/stdc++.h>
using namespace std;

// int hash[256] to map all characters
// hash[s[i]]++;

int main(){
   string s;
   cin>>s;

   // pre computation
   int hash[26]={0};
      for (int i = 0; i < s.size(); i++)
      {
         hash[s[i] - 'a']++;
      }
      

   int n;
   cin>>n;
   while(n--){
      char ch;
      cin>>ch;
      // fetch
      cout<<hash[ch - 'a']<<endl;
   }
}