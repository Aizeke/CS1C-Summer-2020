#pragma once

#include "Shape.h"

// 1. Create sub classes of Shape called Rectangle 
// and Triangle that inherited the pure virtual 
// members above. 

class Triangle : public Shape {
public:
    Triangle();
    ~Triangle(){};
    Triangle(float base, float sideA, float sideB, float height);

    float calcPerimeter() override;
    float calcArea() override;
private:
    float sideA;
    float sideB;
    float sideC;
    float height;
};