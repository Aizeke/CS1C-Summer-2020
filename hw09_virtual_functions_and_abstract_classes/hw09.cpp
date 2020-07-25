/*************************************************************************
 * AUTHOR     : Isaac Guido
 * HW08       : Virtual Functions & Abstract Classes
 * CLASS      : CS 1C
 * SECTION    : Due July 7 3pm
*************************************************************************/

#include "Rectangle.h"
#include "Triangle.h"

// 2. Write two non-member functions called printPerimeter 
//    and printArea that call the methods calcPerimeter 
//    and calcArea respectfully.

void printPerimeter(Shape *shape);
void printArea(Shape *shape);

int main() {

// 3. Instantiate a Rectangle and a Triangle object.
Rectangle *rectangle = new Rectangle(100.5, 150.2); // 4. Input the length and width of a rectangle
Triangle *triangle = new Triangle(20.5, 15.5, 14.8, 35.2); // 5. Input the length of the three sides of a triangle 


// 4. Call the functions printPerimeter and printArea.
cout << "The Perimeter of the Rectangle is : ";
printPerimeter(rectangle);
cout << "The Area of the Rectagnle is : ";
printArea(rectangle);

cout << endl << endl;

// 5. Call the functions printPerimeter and printArea.
cout << "The Perimeter of the Triangle is : ";
printPerimeter(triangle);
cout << "The Area of the Triangle is : ";
printArea(triangle);

cout << endl << endl;

// deleting objects that were created;

delete rectangle;
delete triangle;

return 0;
}

void printPerimeter(Shape * shape){
    cout << shape->calcPerimeter() << endl;
}

void printArea(Shape * shape){
    cout << shape->calcArea() << endl;
}