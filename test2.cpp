#include <iostream>

using namespace std;

class osoba
{
private:
    string imie;
    string nazwisko;

public:
    void setImie(string im) { imie = im; }
    void setNazwisko(string nazw) { nazwisko = nazw; }
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    void wizytowka();
};

void osoba::wizytowka()
{
    cout << endl
         << "imie: " << imie
         << endl
         << "nazwisko: " << nazwisko;
}

int main()
{

    return 0;
}