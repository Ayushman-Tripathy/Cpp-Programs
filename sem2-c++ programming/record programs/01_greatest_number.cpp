// Write a Program to find greatest among three numbers using nested if…else statement.
#include<iostream>
using namespace std;
int main(){
	int a,b,c,big;
	cout<<"Enter any three numbers: "<<endl;
	cin>>a>>b>>c;
	if(a>b){
		if(a>c)
			big=a;
		else
			big=c;
	}
	else{
		if(b>c)
			big=b;
		else
			big=c;
	}
	cout<<"The greatest number is: "<<big<<endl;
	return 0;
}
