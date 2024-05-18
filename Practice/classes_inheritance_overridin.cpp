#include <iostream>
using namespace std;

class Circle
{
protected:
    float radius;
    int xcoord;
    int ycoord;

public:
    Circle(float r, int x, int y)
    {
        radius = r;
        xcoord = x;
        ycoord = y;
    }
    float getRadius()
    {
        return radius;
    }
    void setRadius(float r)
    {
        radius = r;
    }
    int getxcoord()
    {
        return radius;
    }
    void setxcoord(int x)
    {
        xcoord = x;
    }
    int getycoord()
    {
        return radius;
    }
    void setycoord(int y)
    {
        ycoord = y;
    }
    float area()
    {
        return 3.14 * radius * radius;
    }
    float circumference()
    {
        return 3.14 * radius * radius;
    }
    virtual void showData()
    {
        cout << "Radius: " << radius << endl;
        cout << "x coordinate: " << xcoord << endl;
        cout << "y coordinate: " << ycoord << endl;
    }
};

class Cylinder : public Circle
{
private:
    float height;

public:
    Cylinder(float r, int x, int y, float h) : Circle(r, x, y)
    {
        height = h;
    }
    double volume()
    {
        return area() * height;
    }
    void showData() override
    {
        Circle::showData();
        cout << "Height: " << height << endl;
    }
};

int main()
{
    Cylinder cy1(12.3, 5, 4, 7.5);
    cy1.showData();
    cout << cy1.area();
    return 0;
}