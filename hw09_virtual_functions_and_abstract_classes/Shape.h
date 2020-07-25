#pragma once

#include <iostream>

using namespace std;

// 1. Create an abstract class called Shape with pure virtual
// members called calcPerimeter and calcArea.

class Shape {

public:
    Shape() {};
    virtual ~Shape(){};
    
    virtual float calcPerimeter() = 0;
    virtual float calcArea() = 0;
};