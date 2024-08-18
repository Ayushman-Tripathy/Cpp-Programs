// Write a program to show the ways of calling constructors and destructors.
#include<iostream>
using namespace std;

class MyClass{
public:
    MyClass(){
        cout << "Constructor called!" << endl;
    }
    ~MyClass(){
        cout << "Destructor called!" << endl;
    }
};
int main(){
    cout << "Creating object 1:" << endl;
    MyClass obj1; // using default constructor
    cout << "\nCreating object 2:" << endl;
    MyClass *obj2 = new MyClass(); // Calling default constructor using dynamic allocation
    cout << "\nCreating object 3:" << endl;
    MyClass obj3 = MyClass(); // Calling default constructor using temporary object
    cout << "\nDestroying object 2:" << endl;
    delete obj2; // Calling destructor manually for dynamically allocated object
    cout << "\nDestroying object 1 and 3:" << endl;
    // Destructor called automatically when object goes out of scope
    return 0;
}
