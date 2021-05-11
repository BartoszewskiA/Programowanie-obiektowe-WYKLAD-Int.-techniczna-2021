#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class punkt
{
private:
    double x;
    double y;
    int precyzja; //0-całkowite 1-rzeczywiste

public:
    punkt()
    {
        x = 0;
        y = 0;
        precyzja = 0;
    }
    punkt(int xy)
    {
        x = xy;
        y = xy;
        precyzja = 0;
    }
    punkt(int x, int y)
    {
        this->x = x;
        this->y = y;
        precyzja = 0;
    }

    punkt(double xy)
    {
        x = xy;
        y = xy;
        precyzja = 1;
    }
    punkt(double x, int y)
    {
        this->x = x;
        this->y = y;
        precyzja = 1;
    }

    string toString();
};

string punkt::toString()
{
    stringstream temp;
    temp << "(" << x << ";" << y << ")-";
    if (precyzja == 0)
        temp << "calkowite";
    else
        temp << "rzeczywiste";
    string s = temp.str();
    return s;
}

int main()
{
    punkt p1(5.0);
    cout<<p1.toString()<<endl;
    return 0;
}