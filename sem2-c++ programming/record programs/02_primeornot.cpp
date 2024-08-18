//Write a Program to check a number is prime or not.
#include<iostream>
using namespace std;
int Isprime(int a){
	for(int i=2;i<a-1;i++){
		if(a%i==0)
			return 1;
	}
	return 0;
}
int main(){
	int num;
	cout<<"Enter a number: "<<endl;
	cin>>num;
	if(num==0 || num==1)
		cout<<num<<" Is a special number."<<endl;	
	else if(Isprime(num))
		cout<<num<<" Is not a prime number."<<endl;
	else
		cout<<num<<" Is a prime number."<<endl;
	return 0;
}
