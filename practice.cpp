#include<iostream>
using namespace std;

bool checkEven(int n){
  if(n%2==0){
    return true;
  }
  else return false;
}

int main(){
  int n;
  cout<<"Enter the number: "<<endl;
  cin>>n;
  
   bool isEVen = checkEven(n);
   if(isEVen){
    cout<<n<<" is an Even Number"<<endl;

   }
   else
   {
    cout<<n<<" is an Odd Number"<<endl;
   }
   
}