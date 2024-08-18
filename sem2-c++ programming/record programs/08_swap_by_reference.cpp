// Write a Program for Swapping of two numbers using pass by reference.
#include<iostream>
using namespace std;
void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
int main(){
	int num1, num2;
	cout <<"Enter the first number: ";
	cin >>num1;
	cout <<"Enter the second number: ";
	cin >>num2;
	cout <<"Before swap 1st number: " <<num1 <<" and 2nd number: " <<num2 <<endl;
	swap(num1, num2);
	cout <<"After swap 1st number: " <<num1 <<" and 2nd number: " <<num2 <<endl;
	return 0;
}