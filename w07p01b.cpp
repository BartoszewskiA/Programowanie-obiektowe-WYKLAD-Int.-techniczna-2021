#include <iostream>

using namespace std;

class testowa
{
private:
    int dana;
    friend void zapisz_dana(int z, testowa* p);
    friend void odczytaj_dana(testowa* p);
};


void zapisz_dana(int z, testowa* p)
{
    p->dana = z;
}

void odczytaj_dana(testowa* p)
{
    cout<<"dana:"<<p->dana;
}

int main()
{
    testowa* obiekt1 = new testowa; 
    testowa* obiekt2 = new testowa; 

    zapisz_dana(10,obiekt1);
    odczytaj_dana(obiekt1);

    delete obiekt1, obiekt2;
    return 0;
}