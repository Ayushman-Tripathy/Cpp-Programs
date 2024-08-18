// WAP to find the area of circle , triangle , rectangle with function overloading
#include<iostream>
using namespace std;
class Area{
    const float PI = 3.14159;
public:
    float area(float r){
        return PI * r * r;
    }
    float area(float half, float height, float base){
        return half * height * base;
    }
    float area(float length, float width){
        return length * width;
    }
};
int main(){
    float r, h, b, l, w;
    Area a;
    cout << "Enter the radius of circle: " ;
    cin >> r;
    cout << "Area of the circle is: " << a.area(r) << endl;
    cout << "Enter the height and base values for triangle: " ;
    cin >> h >> b ;
    cout << "Area of the triangle is: " << a.area(0.5, h, b) << endl ;
    cout << "Enter the length and width of rectangle: " ;
    cin >> l >> w ;
    cout << "Area of rectangle is: " << a.area(l, w) << endl ;
    return 0; 
}