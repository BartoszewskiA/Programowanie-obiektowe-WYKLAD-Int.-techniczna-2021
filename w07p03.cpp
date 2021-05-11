#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

class RGB;
class ARGB;


class RGB
{

private:
    int R;
    int G;
    int B;

public:
    RGB(int r=0, int g=0, int b=0) : R(r), G(g), B(b) {}
    string toString()
    {
        stringstream temp;
        temp<<"R="<<R<<" G="<<G<<" B="<<B<<endl;
        return temp.str();
    }
    friend ARGB* suma(ARGB* k1, RGB* k2);
};

class ARGB
{

private:
    int A;
    int R;
    int G;
    int B;

public:
    ARGB(int a=255, int r=0, int g=0, int b=0) : A(a), R(r), G(g), B(b) {}
    string toString()
    {
        stringstream temp;
        temp<<"R="<<R<<" G="<<G<<" B="<<B<<" przezroczystosc: "<<A<<endl;
        return temp.str();
    }
    friend ARGB* suma(ARGB* k1, RGB* k2);
};


ARGB* suma(ARGB* k1, RGB* k2)
{
    ARGB* temp = new ARGB;
    temp->A = k1->A;
    temp->R = (k1->R + k2->R) / 2;
    temp->G = (k1->G + k2->G) / 2;
    temp->B = (k1->B + k2->B) / 2;
    return temp; 
}


int main()
{
    return 0;
}