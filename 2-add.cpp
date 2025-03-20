#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	int thickness;
	int getArea(); 
};
int Rectangle::getArea() {
	return width * height * thickness;
}
int main() {
	Rectangle rect;
	cout << "";
	cin >> rect.width >> rect.height >> rect.thickness;
	cout << "사각형의 체적은 " << rect.getArea() << endl;
}
