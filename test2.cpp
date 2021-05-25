/*WAP to calculate and display cube of an integer and float variable using function overloading. */

//TODO Solution

#include <iostream>
using namespace std;

int cube(int);

float cube(float);

int main()
{
    int a;
    float b;
    cout << "Enter the Integer Value: ";
    cin >> a;

    cout << "Enter the Float Value: ";
    cin >> b;

    cout << "\n\n";

    cout << "Cube of integer number " << a << " is " << cube(a) << endl;
    cout << "Cube of float number " << b << " is " << cube(b) << endl;

    return 0;
}

int cube(int x)
{
    return x * x * x;
}

float cube(float y)
{
    return y * y * y;
}