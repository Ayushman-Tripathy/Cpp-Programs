// Write a program to distinguish the properties of static and non-static data members.
#include<iostream>
using namespace std;
class myClass{
public:
    static int static_member ;
    int non_static_member;
};
int myClass :: static_member = 10;

int main(){
    myClass obj1, obj2;
    // Accessing static member using class and object
    cout << "Static member accessed using class name: " << myClass::static_member << endl;
    cout << "Static member accessed using object (obj1): " << obj1.static_member << endl;
    cout << "Static member accessed using object (obj2): " << obj2.static_member << endl;
    
    // Modifying static member using object
    obj1.static_member = 100;
    cout << "Modified static member using obj1: " << obj1.static_member << endl;
    cout << "Static member using obj2 after modification: " << obj2.static_member << endl;

    // Accessing non-static member
    obj1.non_static_member = 15;
    obj2.non_static_member = 20;
    cout << "Non-static member accessed using obj1: " << obj1.non_static_member << endl;
    cout << "Non-static member accessed using obj2: " << obj2.non_static_member << endl;
    return 0;
}