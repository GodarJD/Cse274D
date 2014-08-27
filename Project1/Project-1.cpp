// classes example
#include <iostream>
using namespace std;
#include "rectangle.h"

int main () {
	Rectangle rect;
	cout << "area: " << rect.area();

	Rectangle rect2 = rect;

	Rectangle *pRect; //This is a pointer to the object

	pRect = &rect; //assign the pointer to the object

	cout << "area for rect1: " << rect.area() << endl;



	rect.set_values (5,10);
	cout << "area: " << rect.area() << endl;

	pRect = &rect2


	return 0;
}
