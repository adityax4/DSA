#include<bits/stdc++.h>
using namespace std;

int main(){
   int m;
   cin>>m;
   int arr[m] = {};
   for (int i = 0; i < m; i++)
   {
      cin>>arr[i];
   }

   //precompute
   int hash[13] ={0};
   for (int i = 0; i < m; i++)
   {
      hash[arr[i]] += 1;
   }
   

   int n;
   cin>>n;
   while(n--){
      int number;
      cin>>number;
      //fetch
      cout<<hash[number]<<endl;
   }
}