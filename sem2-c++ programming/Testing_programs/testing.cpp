#include<iostream>
#include<iomanip>
using namespace std;
class Myclass {
	int a;
	int b;
public:
	void get_data(void);
	void put_data(void);
	int sum(void);
};
void Myclass :: get_data(void){
	cout <<"Enter any two numbers: ";
	cin >> a >> b;
}
inline void Myclass :: put_data(void){
	cout<< a << " " << b << endl;
}
inline int Myclass :: sum(void){
	cout<<"Two numbers are: ";
	put_data();
	cout<< "The summation is: " ;
	return a + b;
}
int main(){
	Myclass obj;
	obj.get_data();
	obj.put_data();
	cout << obj.sum();
	return 0;
}
