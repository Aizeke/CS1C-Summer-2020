#pragma once

#include "Shape.h"

// 1. Create sub classes of Shape called Rectangle 
// and Triangle that inherited the pure virtual 
// members above. 

class Rectangle : public Shape {
public:
    Rectangle();
    ~Rectangle() {};
    Rectangle (float length, float width);

    float calcPerimeter() override;
    float calcArea() override;

    void printPerimeter();
    void printArea();

// Private Date Members;
private:

float length;
float width;
};