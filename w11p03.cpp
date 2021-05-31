#include <iostream>
#include <cmath>

using namespace std;

class wektor
{
protected:
    double x;
    double y;

public:
    wektor(double X = 0, double Y = 0) : x(X), y(Y) {}
    double getX() { return x; }
    double getY() { return y; }
    void setX(double X) { x = X; }
    void setY(double Y) { y = Y; }

    wektor operator+(wektor w2)
    {
        wektor wynik(x + w2.x, y + w2.y);
        // wektor wynik(this->x + w2.x, this->y + w2.y);
        return wynik;
    }

    wektor operator-(wektor w2)
    {
        wektor wynik(this->x - w2.x, this->y - w2.y);
        return wynik;
    }

    wektor operator*(double skalar)
    {
        wektor wynik(x * skalar, y * skalar);
        return wynik;
    }

    void operator+=(wektor w2)
    {
        this->x += w2.x;
        this->y += w2.y;
    }
    // wektor operator*(double skalar)  - wyszło nadpisanie funkcji
    // {                                lista parametrów jest taka sama jak wyżej
    //     wektor wynik(skalar * x, skalar * y);
    //     return wynik;
    // }

    bool operator>(wektor w2)
    {
        if (sqrt(x * x + y * y) > sqrt(w2.x * w2.x + w2.y * w2.y))
            return true;
        else
            return false;
    }

    friend wektor operator*(double skalar, wektor w2); // funkcje, których nie można właczyć do klasy
    friend ostream &operator<<(ostream &str, wektor w1);
    friend istream &operator>>(istream &str, wektor &w1);
};

//funkcje operatorowe - globalne f. programu

wektor operator*(double skalar, wektor w2)
{
    wektor wynik(skalar * w2.x, skalar * w2.y);
    return wynik;
}

int main()
{
    wektor w1(10, 20), w2(30, -40);

    wektor wynik = 2.5 * w1;
    cout << "podaj dana:";
    cin >> w1;
    cout << w1;
    // w1 += w2;
    // cout << w1.getX() << ";" << w1.getY();

    return 0;
}