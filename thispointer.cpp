#include <iostream>

using namespace std;

class Cow
{
    public:
    /*int boy;
    Cow(int boy)
    {
        this->boy = boy;
    }*/

    void printThis()
    {
        cout << this << endl;
    }
};

int main(int argc, char *argv[])
{
    Cow bet;
    Cow goat;
    cout << &bet << endl;
    bet.printThis();
    cout << endl;
    goat.printThis();
    cout << &goat<< endl;
    cout <<"\n";
    Cow *bob = new Cow;
    cout << bob << endl;
    bob->printThis();
    delete bob;

}
