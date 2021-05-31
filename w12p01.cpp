
#include <iostream>
#include <sstream>

using namespace std;

class tablica
{
private:
    int tab[100];
    int const dlugosc = 100;

public:
    tablica(int wartosc_standardowa = 0)
    {
        for (int i = 0; i < dlugosc; i++)
            tab[i] = wartosc_standardowa;
    }

    int wypisz_element(unsigned int nr)
    {
        return tab[nr];
    }

    int & operator[](unsigned int index)
    {
        return tab[index];
    }

    friend ostream & operator<<(ostream & str, tablica t);

};

ostream & operator<<(ostream & str, tablica t)
{
    for (int i=0; i<t.dlugosc; i++)
        str<<t.tab[i]<<" ";
    return str;
}

int main()
{
    tablica t1(30);
    t1[20]=1000;
    cout<<t1;
    //cout<<endl<<t1.wypisz_element(40);
    return 0;
}