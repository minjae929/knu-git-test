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

	cout << "innerRadius = ";
	cin >> donut_two.innerRadius;
	double area = donut_two.getArea();

	cout << "outerRadius = ";
	cin >> donut_two.outerRadius;
	double biggerArea = donut_two.bigArea();

	cout << "donut 면적은 " << biggerArea - area << endl;
}
