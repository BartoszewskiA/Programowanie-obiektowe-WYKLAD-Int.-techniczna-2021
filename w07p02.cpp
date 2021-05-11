#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

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
    void zamien_na_monochromatyczne()
    {
        int mono = round((R+G+B)/3.0);
        R=G=B=mono;
    }
    friend RGB suma(RGB &k1, RGB &k2);
    friend RGB* suma_dynamicznie(RGB* k1, RGB* k2);
};

RGB suma(RGB &k1, RGB &k2)
{
    RGB temp;
    temp.R = (k1.R + k2.R) / 2;
    temp.G = (k1.G + k2.G) / 2;
    temp.B = (k1.B + k2.B) / 2;
    return temp;
}

RGB* suma_dynamicznie(RGB* k1, RGB* k2)
{
    RGB* temp = new RGB;
    temp->R = (k1->R + k2->R) / 2;
    temp->G = (k1->G + k2->G) / 2;
    temp->B = (k1->B + k2->B) / 2;
    return temp; 
}


int main()
{
    // RGB p1(200,20,30);
    // RGB p2(100,200,50);
    //p1.zamien_na_monochromatyczne();
    
    // RGB wynik = suma(p1,p2);
    
    // cout<<wynik.toString();

    RGB* p1 = new RGB(200,30,50);
    RGB* p2 = new RGB(100,40,30);

    RGB* wynik = suma_dynamicznie(p1,p2);
    cout<<wynik->toString();

    delete p1,p2, wynik;
    return 0;
}