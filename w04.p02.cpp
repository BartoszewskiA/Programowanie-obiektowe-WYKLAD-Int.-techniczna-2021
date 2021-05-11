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
    int delta()
    {
        return b * b - 4 * a * c;
    }

public:
    rownanie_kwadratowe();
};

rownanie_kwadratowe::rownanie_kwadratowe()
{
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;

    if (delta() > 0)
    {
        cout << "x1=" << (-b - sqrt(delta())) / (2 * a) << endl;
        cout << "x2=" << (-b + sqrt(delta())) / (2 * a) << endl;
    }
    else if (delta() == 0)
    {
        cout << "x0=" << (-b) / (2 * a) << endl;
    }
    else
        cout << "brak rozwiazan";
}

int main()
{
    rownanie_kwadratowe r1;
    return 0;
}