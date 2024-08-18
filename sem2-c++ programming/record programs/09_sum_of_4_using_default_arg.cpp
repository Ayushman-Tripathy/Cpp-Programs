// Write a Program to find sum of four numbers using default argument passing.
#include<iostream>
using namespace std;

int sum(int n1=0, int n2=0, int n3=0, int n4=0){
    return n1 + n2 + n3 + n4;
}
int main(){
    int a, b, c, d;
    cout <<"Enter any four numbers: ";
    cin >>a >>b >>c >>d;
    cout << "Result 1 sum(): " << sum() << endl;
    cout << "Result 2 sum(num1): " << sum(a) << endl;
    cout << "Result 3 sum(num1 + num2): " << sum(a, b) << endl;
    cout << "Result 4 sum(num1 + num2 + num3): " << sum(a, b, c) << endl;
    cout << "Result 5 sum(num1 + num2 + num3 + num4): " << sum(a, b, c, d) << endl;
    return 0;
}
