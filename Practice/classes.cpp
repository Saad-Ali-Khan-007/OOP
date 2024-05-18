#include <iostream>
using namespace std;

class Circle
{
private:
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
    // Member Functions
    float area()
    {
        return 3.14 * radius * radius;
    }
    float circumference()
    {
        return 2 * 3.14 * radius;
    }
    void showData()
    {
        cout << "Area of circle: " << area() << endl;
        cout << "Circumference of circle: " << circumference() << endl;
    }
    // Getter and Setter
    void setRadius(float r)
    {
        radius = r;
    }
    float getRadius()
    {
        return radius;
    }
    void setxcoord(int x)
    {
        xcoord = x;
    }
    int setxcoord()
    {
        return xcoord;
    }
    void setycoord(int y)
    {
        ycoord = y;
    }
    int getycoord()
    {
        return ycoord;
    }
};

int main()
{
    Circle c1(3.4, 4, 5);
    c1.showData();
    return 0;
}