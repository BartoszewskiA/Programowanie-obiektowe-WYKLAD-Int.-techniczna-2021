
#include <iostream>

using namespace std;

//----------------------------------------

class odcinek
{
private:
    int x1, y1, x2, y2;
public:
    odcinek(int a = 0, int b = 0, int c = 1, int d = 1)
    {
        a = x1;
        b = y1;
        c = x2;
        d = y2;
    }
    int getA() { return x1; }
    void setA(int a) { a = x1; }
    int getB() { return x1; }
    void setB(int b) { b = y1; }
    int getC() { return x1; }
    void setC(int c) { c = x2; }
    int getD() { return x1; }
    void setD(int d) { d = y2; }
    void dlugosc()
    {
        double wynik;
        wynik = sqrt(pow((x2 - x1), 2) + pow((x2 - x1), 2));
    }
};
int main() { return 0; }
