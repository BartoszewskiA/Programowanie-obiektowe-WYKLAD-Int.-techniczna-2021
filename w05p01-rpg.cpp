#include <iostream>
#include <string>

using namespace std;

class postac
{
private:
    string imie;
    int zycie;
    int atak;
    int obrona;

public:
    postac(string kto, int at, int obr) : imie(kto), atak(at), obrona(obr)
    {
        if (atak > 20)
            atak = 20;
        if (atak < 5)
            atak = 5;
        if (obrona > 10)
            obrona = 10;
        if (obrona < 0)
            obrona = 0;
        zycie = 200 - 2 * atak - 2 * obrona;
    }
    void setImie(string imie) { this->imie = imie; }
    void setZycie(int zycie) { this->zycie = zycie; }
    void setAtake(int atak) { this->atak = atak; }
    void setObrona(int obrona) { this->obrona = obrona; }
    string getImie() { return imie; }
    int getZycie() { return zycie; }
    int getAtak() { return atak; }
    int getObrona() { return obrona; }
    void przedstaw_sie()
    {
        cout<<endl;
        cout<<"Postac "<<imie<<"("<<zycie<<";"<<atak<<":"<<obrona<<")";
    }
    ~postac()
    {
        
        przedstaw_sie();
        cout<<" schodzi z ringu"<<endl;
    }
};

int ring(postac &z1, postac &z2);

int main()
{
    postac gracz1("Conan", 30, 10), gracz2("Chuck",12,15);
    cout<<ring(gracz1,gracz2);
    cout<<"koniec walki";
    return 0;
}

int ring(postac &z1, postac &z2)
{
    int rundy =0;

    while(z1.getZycie()>0 && z2.getZycie()>0)
    {
        z2.setZycie(z2.getZycie()-(z1.getAtak()-z2.getObrona()));
        z1.setZycie(z1.getZycie()-(z2.getAtak()-z1.getObrona()));
        rundy++;
    }

    return rundy;
}