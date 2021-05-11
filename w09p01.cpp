#include <iostream>
#include <sstream>

using namespace std;

class punkt
{
protected:
    int x;
    int y;

public:
    punkt()
    {
        cout << endl
             << "LOG: konstruktor klasy punkt, bez parametrow " << endl;
    }

    punkt(int X, int Y) : x(X), y(Y)
    {
        cout << endl
             << "LOG: konstruktor klasy punkt, z parametrami " << endl;
    }

    ~punkt()
    {
        cout << endl
             << "LOG: destruktor klasy punkt" << endl;
    }

    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }
    int getX() { return x; }
    int getY() { return y; }
    string toString()
    {
        stringstream temp;
        temp << "(" << x << ";" << y << ")";
        return temp.str();
    }
};

class punkt_3D : public punkt
{
protected:
    int z;

public:
    punkt_3D()
    {
        cout << endl
             << "LOG: konstruktor klasy punkt_3D, bez parametrow " << endl;
    }

    punkt_3D(int X, int Y, int Z) : punkt(X, Y), z(Z)
    {
        cout << endl
             << "LOG: konstruktor klasy punkt_3D, z parametrami " << endl;
    }
    ~punkt_3D()
    {
        cout << endl
             << "LOG: destruktor klasy punkt_3D" << endl;
    }

    void setZ(int z) { this->z = z; }
    int getZ() { return z; }
    string toString()
    {
        stringstream temp;
        temp << "(" << x << ";" << y << ";" << z << ")";
        return temp.str();
    }
};

int main()
{
    punkt_3D* p1 = new punkt_3D(20, 40, 50);
    cout << p1->toString();
    delete p1;
    return 0;
}