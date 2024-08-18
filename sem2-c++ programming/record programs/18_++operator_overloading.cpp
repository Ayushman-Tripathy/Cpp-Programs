#include <iostream>
using namespace std;

class Counter {
    int count;
public:
    Counter() {
        count = 0;
    }
    // Overload ++ operator (prefix)
    Counter& operator++() {
        count++;
        return *this;
    }
    // Overload ++ operator (postfix)
    Counter operator++(int) {
        Counter temp = *this;
        count++;
        return temp;
    }
    // Function to display count
    void display() const{
        cout << "Count: " << count << endl;
    }
};
int main() {
    Counter c1;
    cout << "Initial count: ";
    c1.display();
    ++c1; // Using prefix ++
    cout << "After prefix increment: ";
    c1.display();
    c1++; // Using postfix ++
    cout << "After postfix increment: ";
    c1.display();
    return 0;
}