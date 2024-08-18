// Write a Program for Swapping of two numbers using pass by address.
#include<iostream>
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
using namespace std;
int main(){
	int num1, num2;
	cout <<"Enter the 1st number: ";
	cin >>num1;
	cout <<"Enter the 2nd number: ";
	cin >>num2;
	cout <<"Before swap 1st number: " <<num1 <<" and 2nd number: " <<num2 <<endl;
	swap(&num1, &num2);
	cout <<"After swap 1st number: " <<num1 <<" and 2nd number: " <<num2 <<endl;
	return 0;
}
