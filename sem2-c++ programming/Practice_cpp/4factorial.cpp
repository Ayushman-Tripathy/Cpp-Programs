// WAP to find the sum of series 1! + 2! + 3! + .... n!
#include<iostream>
using namespace std;

int main(){
    int num, fact=1, sum=0 ;
    cout << "Enter a positive whole number: " <<endl ;
    cin >> num ;
    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++)
            fact*=j;
        sum+=fact;
        fact = 1;
    }
    cout << "The summation of the series is: " << sum <<endl;
    return 0;
}
