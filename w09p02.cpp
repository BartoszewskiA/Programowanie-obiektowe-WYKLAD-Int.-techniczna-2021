#include <iostream>
#include <sstream>

using namespace std;

class punkt
{
protected:
    int x;
    int y;

public:
    punkt(int X, int Y) : x(X), y(Y)
    {
        cout << endl
             << "LOG: konstruktor klasy punkt, z parametrami " << endl;
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
    punkt_3D(int X, int Y, int Z) : punkt(X, Y), z(Z)
    {
        cout << endl
             << "LOG: konstruktor klasy punkt_3D, z parametrami " << endl;
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

class pixel_3D : public punkt_3D
{
protected:
    string kolor;

public:
    pixel_3D(int X, int Y, int Z, string K) : punkt_3D(X, Y, X), kolor(K)
    {
        cout << endl
             << "LOG: konstruktor klasy pixel_3D, z parametrami " << endl;
    }
    void setKolor(string K) { kolor = K; }
    string getKolor() { return kolor; }
    string toString()
    {
        stringstream temp;
        temp << punkt_3D::toString() << "-" << kolor << " ";
        return temp.str();
    }
};

int main()
{
    pixel_3D p1(10, 20, 30, "red");
    cout << p1.toString();
    return 0;
}