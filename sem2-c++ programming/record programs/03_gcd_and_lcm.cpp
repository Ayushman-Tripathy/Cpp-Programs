//Write a Program to find the GCD and LCM of two numbers.
#include <iostream>
using namespace std;
int gcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}
int main(){
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;    
	cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) << endl;
    return 0;
}
