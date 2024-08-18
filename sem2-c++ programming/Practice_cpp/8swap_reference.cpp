// WAP to swap two numbers using pass by reference method 
#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}
int main(){
    int first, second;
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the second number: ";
    cin >> second;
    cout << "Before Swap first number is: " << first << " and second number is: " << second << endl; 
    swap(first, second);
    cout << "After Swap first number is: " << first << " and second number is: " << second;
    return 0; 
}