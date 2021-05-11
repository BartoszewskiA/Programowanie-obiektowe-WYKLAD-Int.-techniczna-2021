#include <iostream>

using namespace std;

class osoba
{
    private:
    string * imie;
    public:
    osoba(string kto="-")
    {
        imie = new string;
        *imie = kto;
    }
    osoba(const osoba & wzorzec)  // konstruktor kopiujacy
    {
        imie = new string;
        *imie = *wzorzec.imie;
        //wzorzec.imie = NULL;
    }
    string getImie() {return *imie;}
    void setImie (string kto) { *imie = kto;}
    ~osoba() { delete imie;}
};
int main()
{
    // osoba ktos("Kowalski");
    // osoba ktos2 = ktos;
    // ktos.setImie("Iksinski");
    // cout<<ktos.getImie()<<"  "<<ktos2.getImie();

    osoba * ktos1 = new osoba("Kowalski");
    osoba * ktos2 =  new osoba(*ktos1);
    cout<<ktos1->getImie()<<"  "<<ktos2->getImie();

    return 0;
}