// Write a program to find sum of four numbers using default argument passing in member function.
#include <iostream>
using namespace std;

class Calculator{
	public:
    	int sum(int a, int b=0, int c=0, int d=0){
        	return a + b + c + d;
    	}
};
int main(){
    Calculator calc;
    int n1 = 5, n2 = 10, n3 = 15, n4 = 20;
    int r1 = calc.sum(n1);
    int r2 = calc.sum(n1, n2);
    int r3 = calc.sum(n1, n2, n3);
    int r4 = calc.sum(n1, n2, n3, n4);
	cout << "Numbers: " << n1 << ", " << n2 << ", " << n3 << ", " << n4 << endl;
    cout << "Result 1 (num1): " << r1 << endl;
    cout << "Result 2 (num1 + num2): " << r2 << endl;
    cout << "Result 3 (num1 + num2 + num3): " << r3 << endl;
    cout << "Result 4 (num1 + num2 + num3 + num4): " << r4 << endl;
    return 0;
}
