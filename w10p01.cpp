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
        x = 0;
        y = 0;
        cout << endl
             << "LOG: konstruktor domyslny klasy punkt " << endl;
    }

    punkt(int X, int Y) : x(X), y(Y)
    {
        cout << endl
             << "LOG: konstruktor klasy punkt, z parametrami " << endl;
    }

    punkt(punkt &wzorzec)
    {
        x = wzorzec.x;
        y = wzorzec.y;
        cout << endl
             << "LOG: konstruktor kopiujacy klasy punkt " << endl;
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

int main()
{
    punkt wzor(10,20);
    // punkt p1 = wzor;
    // punkt p1(wzor);
    punkt * p1 = new punkt(wzor);
    cout << p1->toString();
    return 0;
}