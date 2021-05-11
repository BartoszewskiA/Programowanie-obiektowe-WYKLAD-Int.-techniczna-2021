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
    void przedstaw_sie();
    void wczytajImie();
    void wczytajNazwisko();
};

void osoba::przedstaw_sie()
{
    cout << endl
         << "imie: " << imie
         << endl
         << "nazwisko: " << nazwisko;
}

void osoba::wczytajImie()
{
    cout << "podaj imie: ";
    cin >> imie;
}
void osoba::wczytajNazwisko()
{
    cout << "podaj nazwisko: ";
    cin >> nazwisko;
}

int main()
{
    osoba *ktos2 = new osoba;
    ktos2->wczytajImie();
    ktos2->wczytajNazwisko();
    ktos2->przedstaw_sie();
    return 0;
}