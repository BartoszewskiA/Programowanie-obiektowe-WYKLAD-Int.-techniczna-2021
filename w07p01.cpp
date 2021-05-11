#include <iostream>

using namespace std;

class testowa
{
private:
    int dana;
    friend void zapisz_dana(int z, testowa &obiekt);
    friend void odczytaj_dana(testowa &obiek);
};


void zapisz_dana(int z, testowa &obiekt)
{
    obiekt.dana = z;
}

void odczytaj_dana(testowa &obiekt)
{
    cout<<"dana:"<<obiekt.dana;
}

int main()
{
    testowa obiekt1,obiekt2;

    zapisz_dana(10,obiekt1);
    odczytaj_dana(obiekt1);
    return 0;
}
