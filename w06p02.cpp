#include <iostream>
#include <string>

using namespace std;

const int DLUGOSC_TABLICY = 4;

class osoba
{
private:
    int id;
    string imie;
public:
    static int ile_obiektow;
    osoba (string s): imie(s) 
    {
        id=++ile_obiektow;

    }
    void setImie(string imie) { this->imie = imie; }
    string getImie() { return imie; }
    int getId(){return id;}
    static int getIleObiektow() {return ile_obiektow;}
};
int osoba::ile_obiektow = 0;

osoba* tab[DLUGOSC_TABLICY];


main()
{
    string s;
    for (int i=0; i<DLUGOSC_TABLICY; i++)
    {
        cout<<"Imie: ";
        cin>>s;
        tab[i] = new osoba(s);
    }

    for (int i=0; i<DLUGOSC_TABLICY; i++)
        cout<<tab[i]->getId()<<" : "<<tab[i]->getImie()<<endl;
        
    for (int i=0; i<DLUGOSC_TABLICY; i++)
        delete tab[i];
    return 0;
}