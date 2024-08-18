// Write a Program to find reverse of a number.
#include<iostream>
using namespace std;
int main(){
	int num,digit;
	int rev=0;
	cout <<"Enter a number: ";
	cin >>num;
	while(num!=0){
		digit=num%10;
		rev=rev*10+digit;
		num/=10;
	}
	cout <<"The Reverse of the number is: " <<rev <<endl;
	return 0;
}
