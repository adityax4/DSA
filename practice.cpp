#include<bits/stdc++.h>
using namespace std;



int main(){
   string str = "hello world";
   for (int i = 0; i < str.length(); i++)
   {
      if(int(str[0])>96){
         str[0] = (int)str[0] - 32;
      }
      if((int)str[i]==32){
         
      }
      
   }
   
   cout<<str;
}