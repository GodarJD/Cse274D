/*
 * rectangle.cpp
 *
 *  Created on: Aug 27, 2014
 *      Author: godarjd
 */
#include "rectangle.h"

Rectangle::Rectangle() {
	width =1;
	height = 3;
}

void Rectangle::set_values (int x, int y) {
	width = x;
	height = y;
}

int Rectangle::area() {
	return width * height;
}


