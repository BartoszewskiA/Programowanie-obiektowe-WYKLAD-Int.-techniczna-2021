#include <iostream>

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
};



//funkcje operatorowe - globalne f. programu
wektor operator+(wektor w1, wektor w2)
{
    wektor wynik(w1.getX() + w2.getX(), w1.getY() + w2.getY());
    return wynik;
}

wektor operator-(wektor w1, wektor w2)
{
    wektor wynik(w1.getX() - w2.getX(), w1.getY() - w2.getY());
    return wynik;
}

wektor operator*(wektor w1, double skalar)
{
    wektor wynik(w1.getX() * skalar, w1.getY() * skalar);
    return wynik;
}
wektor operator*(double skalar, wektor w2)
{
    wektor wynik(skalar * w2.getX(), skalar * w2.getY());
    return wynik;
}

void operator+=(wektor &w1, wektor w2)
{
    w1.setX(w1.getX() + w2.getX());
    w1.setY(w1.getY() + w2.getY());
}

ostream &operator<<(ostream &str, wektor w1)
{
    str << "[" << w1.getX() << ";" << w1.getY() << "]";
    return str;
}

istream &operator>>(istream &str, wektor &w1)
{
    double temp;
    str >> temp;
    w1.setX(temp);
    return str;
}

bool operator==(wektor w1, wektor w2)
{
    if (w1.getX() == w2.getX() && w1.getY() == w2.getY())
        return true;
    else
        return false;
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