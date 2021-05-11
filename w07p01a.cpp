#include <iostream>

using namespace std;

class testowa
{
private:
    int dana;
public:
    void zapisz_dana(int z);
    void odczytaj_dana();
};
void testowa::zapisz_dana(int z)
{
    dana = z;
}
void testowa::odczytaj_dana()
{
    cout<<"dana: "<<dana;
}
int main()
{
    testowa obiekt1, obiekt2;
    return 0;
}