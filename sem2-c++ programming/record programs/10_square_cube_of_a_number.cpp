// Write a Program to find square and cube of a number using inline function.
#include<iostream>
using namespace std;

inline int square(int n){
    return n * n;
}
inline int cube(int n){
    return n * n * n;
}

int main(){
	int num;
	cout <<"Enter a number to find square and cube of it: ";
	cin >>num;
	cout << "Square of " << num << " is: " << square(num) << endl;
    cout << "Cube of " << num << " is: " << cube(num) << endl;
    return 0;
}
