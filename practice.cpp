#include<iostream>
using namespace std;

int main(){
	try{
		int age = 12;
		if(age>=18)
		{
			cout<<"vote";
		}
		else{
			throw(age);
		}
	}
	catch(int age){
		cout<<"can't vote"<<endl;
		cout<<"your age is: "<<age;
	}
}