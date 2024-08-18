#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	ofstream myfile;
	myfile.open("My_file.txt",ios::app);
	string str;
	cout << sizeof(str) << endl;
	getline(cin,str);
	cout << sizeof(str) << endl;
	myfile << str;
	myfile.close();
	
	ifstream myfile1;
	string str1;
	myfile1.open("My_file.txt");
	
	while (getline(myfile1,str1)){
		cout << str1 << endl;
	}
	myfile1.close();
	
	return 0;
}