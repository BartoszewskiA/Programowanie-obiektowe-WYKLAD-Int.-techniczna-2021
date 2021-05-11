#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class rownanie_kwadratowe
{
private:
    int a;
    int b;
    int c;
    int delta;
    void wylicz_delta()
    {
        delta =  b * b - 4 * a * c;
    }

public:
    rownanie_kwadratowe(int a=0, int b=0, int c=0);
    int liczba_rozwiazan()
    {
        if (delta>0) return 2;
        else if (delta==0) return 1;
        else return 0;
    }
};

rownanie_kwadratowe::rownanie_kwadratowe(int a , int b, int c)
{
    wylicz_delta();
}

int main()
{
   rownanie_kwadratowe r1;
   cout<<r1.liczba_rozwiazan()<<endl;
    return 0;
}