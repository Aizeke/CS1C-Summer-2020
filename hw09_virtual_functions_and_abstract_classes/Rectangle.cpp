#include "Rectangle.h"

Rectangle::Rectangle() {
    width = 10.0;
    length = 10.0;
}

Rectangle::Rectangle(float l, float w) : length(l), width(w) {}

float Rectangle::calcPerimeter() { return 2 * (length + width); }

float Rectangle::calcArea() { return length * width; }