// Write a program to print the result for following series: 1! + 2! + 3! + …………
#include<iostream>
int main(){
	int num,fact=1,result=0;
	std::cout<<"Enter the range: ";
	std::cin>>num;
	for(int i=1;i<=num;i++){
		for(int j=1;j<=i;j++)
			fact*=j;
		result+=fact;
		fact=1;
	}
	std::cout<<"The result of the series is: "<<result;
	return 0;
}
