#include <iostream>
using namespace std;

class Circle {
public:
	int innerRadius;
	int outerRadius;
	double getArea();
	double bigArea();

};

double Circle::getArea() {
	return 3.14 * innerRadius * innerRadius;
}

double Circle::bigArea() {
	return 3.14 * outerRadius * outerRadius;
}

int main() {
	Circle donut_two;
	donut_two.innerRadius = 1;
	double area = donut_two.getArea();

	donut_two.outerRadius = 3;
	double biggerArea = donut_two.bigArea();

	cout << "donut 면적은 " << biggerArea - area << endl;
}
