#include <iostream>
#include <string>

using namespace std;

// int ile_obiektow=0; - podejscie "nieobiektowe"

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

main()
{
    osoba ktos("aaaa");
    cout<<ktos.getImie()<<":"<<osoba::ile_obiektow<<" id="<<ktos.getId()<<endl;
    osoba ktos2("bbbb");
    cout<<ktos2.getImie()<<":"<<osoba::ile_obiektow<<" id="<<ktos2.getId()<<endl;
    osoba ktos3("cccc");
    cout<<ktos3.getImie()<<":"<<osoba::getIleObiektow()<<" id="<<ktos3.getId()<<endl;
    cout<<ktos.getImie()<<":"<<osoba::getIleObiektow()<<" id="<<ktos.getId()<<endl;

    return 0;
}