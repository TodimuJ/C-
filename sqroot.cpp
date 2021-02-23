#include <iostream>
#include <cmath>

using namespace std;

bool sqroot(double x);

int main()
{
    double x;

    cout << "Type in a number" << endl;
    cin >> x;
    cout << endl;

    cout << "The square root of " << x << " is: " << sqroot(x);

return 0;
}

bool sqroot(double x)
{
    double power = pow(x, 0.5);

    if(power>=0)
    return true;

    else
    return false;

}
