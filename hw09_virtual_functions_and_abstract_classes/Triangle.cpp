#include "Triangle.h"

Triangle::Triangle() : sideA{10.5}, sideB{5.5}, sideC{5.5}, height{20.5} {}

Triangle::Triangle(float a, float b, float c, float h): sideA{a}, sideB{b}, sideC{c}, height{h} {}

float Triangle::calcPerimeter() { return sideA + sideB + sideC; }

float Triangle::calcArea() { return (sideA * height) / 2; }