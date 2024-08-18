//Write a Program to find area of circle, triangle and rectangle using function overloading.
#include <iostream>
using namespace std;
const static float PI = 3.14159;
class Area{
public:
    float area(float radius){
        return PI * radius * radius;
    }
    float area(float base, float height){
        return 0.5 * base * height;
    }
    float area_rectangle(float length, float width) {
        return length * width;
    }
};
int main(){
	Area shape;
    float radius, base, height, length, width;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << shape.area(radius) << endl;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << shape.area(base, height) << endl;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << shape.area_rectangle(length, width) << endl;
    return 0;
}