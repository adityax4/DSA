#include<bits/stdc++.h>
using namespace std;

// map stores in sorted order

int main(){
   int n;
   cin>>n;
   int arr[n]={};
   for (int i = 0; i < n; i++)
   {
      cin>>arr[i];
   }
   
   // pre computation
   map<int, int> mpp;
   for (int i = 0; i < n; i++)
   {
      mpp[arr[i]]++;
   }
   
   // // iterate in the map
   // for(auto it: mpp){
   //    cout<<it.first<<"->"<<it.second<<endl;
   // }

   int m;
   cin>>m;
   while(m--){
      int num;
      cin>>num;
      // fetch
      cout<<mpp[num]<<endl;
   }
}