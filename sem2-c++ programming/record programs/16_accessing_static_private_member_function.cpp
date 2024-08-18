// Write a program to show the method of accessing static private member function
#include<iostream>
using namespace std;
class myClass{
private:
    static void my_private_Function(){
        cout << "Private static function called!" << endl;
    }
public:
    static void my_public_Function(){
        my_private_Function();
    }
};

int main(){
    myClass :: my_public_Function();
    return 0;
}