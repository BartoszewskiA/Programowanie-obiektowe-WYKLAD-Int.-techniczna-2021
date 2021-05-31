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

    friend wektor operator+(wektor w1, wektor w2);
    friend wektor operator-(wektor w1, wektor w2);
    friend wektor operator*(wektor w1, double skalar);
    friend wektor operator*(double skalar, wektor w2);
    friend void operator+=(wektor &w1, wektor w2);
    friend void operator-=(wektor &w1, wektor w2);
    friend ostream &operator<<(ostream &str, wektor w1);
    friend istream &operator>>(istream &str, wektor &w1);
};

//funkcje operatorowe - globalne f. programu
wektor operator+(wektor w1, wektor w2)
{
    wektor wynik(w1.x + w2.x, w1.y + w2.y);
    return wynik;
}

wektor operator-(wektor w1, wektor w2)
{
    wektor wynik(w1.x - w2.x, w1.y - w2.y);
    return wynik;
}

wektor operator*(wektor w1, double skalar)
{
    wektor wynik(w1.x * skalar, w1.y * skalar);
    return wynik;
}
wektor operator*(double skalar, wektor w2)
{
    wektor wynik(skalar * w2.x, skalar * w2.y);
    return wynik;
}

void operator+=(wektor &w1, wektor w2)
{
    w1.x += w2.x;
    w1.y += w2.y;
}

ostream &operator<<(ostream &str, wektor w1)
{
    str << "[" << w1.x << ";" << w1.y << "]";
    return str;
}

istream &operator>>(istream &str, wektor &w1)
{
    str >> w1.x;
    return str;
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