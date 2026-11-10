/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159;
    const int CIRCLE = 1;
    const int RECTANGLE = 2;
    const int TRIANGLE = 3;
    const int QUIT = 4;

    int choice = 0;
    double radius = 0.0;
    double length = 0.0;
    double width = 0.0;
    double base = 0.0;
    double height = 0.0;
    double area = 0.0;

    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << fixed << setprecision(5);

    if (choice == CIRCLE)
    {
        cout << "Enter the radius: ";
        cin >> radius;
        if (radius < 0)
        {
            cout << "Error: the radius cannot be negative." << endl;
        }
        else
        {
            area = PI * radius * radius; 
            cout << "Area of the circle: " << area << endl;
        }
    }
    else if (choice == RECTANGLE)
    {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the width: ";
        cin >> width;
        if (length < 0)
        {
            cout << "Error: the length cannot be negative." << endl;
        }
        else if (width < 0)
        {
            cout << "Error: the width cannot be negative." << endl;
        }
        else
        {
            area = length * width;
            cout << "Area of the rectangle: " << area << endl;
        }
    }
    else if (choice == TRIANGLE)
    {
        cout << "Enter the base: ";
        cin >> base;
        cout << "Enter the height: ";
        cin >> height;
        if (base < 0)
        {
            cout << "Error: the base cannot be negative." << endl;
        }
        else if (height < 0)
        {
            cout << "Error: the height cannot be negative." << endl;
        }
        else
        {
            area = base * height * 0.5; 
            cout << "Area of the triangle: " << area << endl;
        }
    }
    else if (choice == QUIT)
    {
        
        cout << "Goodbye." << endl;
    }
    else
    {
        cout << "Error: invalid choice. Please enter a number from 1 to 4." << endl;
    }

    return 0;
}