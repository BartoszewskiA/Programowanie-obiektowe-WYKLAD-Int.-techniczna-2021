#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

class RGB
{
protected:
    int R;
    int G;
    int B;

public:   
    void setR(int R) { this->R = R; }
    void setG(int G) { this->G = G; }
    void setB(int B) { this->B = B; }
    void setR(double R) { this->R = round(R); }
    void setG(double G) { this->G = round(G); }
    void setB(double B) { this->B = round(B); }
    int getR() { return R; }
    int getG() { return G; }
    int getB() { return B; }

    string toString()
    {
        stringstream temp;
        temp << "R=" << R << " G=" << G << " B=" << B;
        return temp.str();
    }
};

class ARGB : public RGB
{
protected:
    int A;

public:
    void setA(int A) { this->A = A; }
    void setA(double A) { this->A = round(A); }
    int getA() { return A; }
    string toString()
    {
        stringstream temp;
        //temp << "A=" << A << " R=" << R << " G=" << G << " B=" << B;
        //temp << "A=" << A << " R=" << getR() << " G=" << getG() << " B=" << getB();
        temp<<"A="<<A<<" "<<RGB::toString();
        return temp.str();
    }
    int getJasnosc()
    {
        return (R + G + B) / 3;
    }
};

int main()
{
    RGB p1;
    p1.setR(10);
    p1.setG(20);
    p1.setB(30);
    cout << p1.toString() << endl;

    ARGB p2;
    p2.setR(100.9);
    p2.setG(200.7);
    p2.setB(300);
    p2.setA(200);
    //cout << p2.RGB::toString();
    cout << p2.toString();
    return 0;
}