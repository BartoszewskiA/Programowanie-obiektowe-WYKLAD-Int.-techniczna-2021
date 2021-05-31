#include <iostream>

using namespace std;

class Bazowa
{
public:
    int a;
    virtual void wypisz()
    {
        cout << "Bazowa " << a << endl;
    }
};

class Pochodna : public Bazowa
{
public:
    int b;
    void wypisz()
    {
        cout << "Pochodna " << a << " " << b << endl;
    }
};

int main()
{
    // Bazowa *b1 = new Bazowa;
    // b1->a = 10;

    // b1->wypisz();

    // Pochodna *p1 = new Pochodna;
    // p1->a = 101;
    // p1->b = 100;

    // p1->wypisz();

    Bazowa *pochodna = new Pochodna;
    pochodna->a = 1001;
    pochodna->wypisz();

    return 0;
}