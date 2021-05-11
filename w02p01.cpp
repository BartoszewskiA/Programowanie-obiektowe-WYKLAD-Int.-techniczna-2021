#include <iostream>

using namespace std;

class osoba
{
private:
    string imie;
    string nazwisko;

public:
    void przedstaw_sie()
    {
        cout << endl
             << "imie: " << imie
             << endl
             << "nazwisko: " << nazwisko;
    }
    void setImie(string im) { imie = im; }
    void setNazwisko(string nazw) { nazwisko = nazw; }
    void wczytajImie()
    {
        cout << "podaj imie: ";
        cin >> imie;
    }
    void wczytajNazwisko()
    {
        cout << "podaj nazwisko: ";
        cin >> nazwisko;
    }
};

int main()
{
    osoba *ktos2 = new osoba;
    ktos2->wczytajImie();
    ktos2->wczytajNazwisko();
    ktos2->przedstaw_sie();
    return 0;
}