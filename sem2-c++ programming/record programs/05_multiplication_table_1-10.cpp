// Write a program to print multiplication table from 1 to 10.
#include<iostream>
using namespace std;
int main(){
	cout << "\t\t\t      MULTIPLICATION TABLE" << endl
	<< "X\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10" << endl << endl;
	for(int i=1;i<=10;i++){
		cout << i;
		for(int j=1;j<=10;j++)
			cout << "\t"<< i*j;
		cout << endl << endl;
	}
	return 0;
}
