#include <iostream>
#include <math.h>

using namespace std;
float pi = 22 / 7;

class Circle
{
public:
    float Radius;

    Circle(float radius) // constructor
    {
        Radius = radius;
    };
    int getRadius()
    {
        cout << "Enter the radius of the circle:" << endl;
        cin >> Radius;
        return Radius;
    }

    float computeArea()
    {

        return pi * (Radius * Radius);
    };

    float computeCircum()
    {
        float perimeter = 2 * pi * Radius;
        return perimeter;
    }
    int printCircle()
    {
        cout << "The Circle radius:" << Radius << endl;
        cout << "Area:" << this->computeArea() << endl;
        cout << "Perimeter:" << this->computeCircum() << endl;
        return 0;
    }
};

class Square
{
public:
    float Side;
    Square(float side)
    {
        Side = side;
    }
    int getSide()
    {
        cout << "Enter the length of the square:" << endl;
        cin >> Side;
        return Side;
    }

    float computeArea()
    {
        return Side * Side;
    }
    float ComputeDiagonal()
    {
        return sqrt(Side * Side + Side * Side);
    }
    float computePerimeter()
    {

        return 4 * Side;
    }
    int printSquare()
    {

        cout << "The square length:" << Side << endl;
        // testing 1 2
        cout << "Area:" << this->computeArea() << endl;
        cout << "Diagonol:" << this->ComputeDiagonal() << endl;
        cout << "Perimeter:" << this->computePerimeter() << endl;
        return 0;
    }
};

class Sphere
{
public:
    float Radius;
    Sphere(float radius)
    {
        Radius = radius;
    }
    int getRadius()
    {
        cout << "Enter the Radius of the sphere:" << endl;
        cin >> Radius;

        return Radius;
    }

    float computeArea()
    {
        return 4 * pi * Radius * Radius;
    }
    float computeVolume()
    {
        return 4 / 3 * pi * Radius * Radius;
    }
    int printSphere()
    {
        cout << "The sphere has a radius of: " << Radius << endl;
        cout << "Surface Area: " << this->computeArea() << endl;
        cout << "Volume of sphere:" << this->computeVolume() << endl;
        return 0;
    }
};

class Cylinder
{
public:
    float Radius;
    float Height;
    Cylinder(float radius, float height)
    {
        Radius = radius;
        Height = height;
    }
    int getR()
    {
        cout << "Enter the radius:" << endl;
        cin >> Radius;
        return Radius;
    }
    int getH()
    {
        cout << "Enter the Height:" << endl;
        cin >> Height;
        return Height;
    }

    float computeArea()
    {
        float closed = 2 * pi * (Radius * Radius) + pi * (2 * Radius) * Height;

        return closed;
    }
    float computeVolume()
    {
        float volume = pi * (Radius * Radius) * Height;

        return volume;
    }

    int printCylinder()
    {
        cout << "The Cylinder radius:" << Radius << endl;
        cout << "The Cylinder Height:" << Height << endl;
        cout << "Surface Area: " << this->computeArea() << endl;
        cout << "Volume of cylinder:" << this->computeVolume() << endl;

        return 0;
    }
};
int main()
{
    char ask;
    do

    {
        cout << "NAME: EDWIN ODHIAMBO OWINO" << endl;
        cout << "REG No.: SCT211-0725/2021\n"
             << endl;

        int option;

        cout << "Please choose a shape from the menu:\n1.Square\n2.Circle\n3.Cylinder\n4.Sphere\n"
             << endl;
        cin >> option;

        if (option == 1)
        {
            Square square = Square(square.getSide());
            cout << "Details of the square:\n"
                 << square.printSquare() << endl;
        }
        else if (option == 2)
        {
            Circle circle = Circle(circle.getRadius());
            cout << "Details of circle:\n"
                 << circle.printCircle() << endl;
        }
        else if (option == 3)
        {
            Cylinder cylinder = Cylinder(cylinder.getR(), cylinder.getH());
            cout << "Details of cylinder:\n"
                 << cylinder.printCylinder() << endl;
        }
        else if (option == 4)
        {
            Sphere sphere = Sphere(sphere.getRadius());
            cout << "Details of Sphere:\n"
                 << sphere.printSphere() << endl;
        }

        cout << "Do you want to continue? y/n\n";
        cin >> ask;
    } while (ask == 'y');

    return 0;
}