#include <iostream>
using namespace std;

int main()
{
    int *p = new int;
    *p = 87;

    cout << p << "   " << *p << "    " << p;
    cout << endl;

    int *first = new int[10];
    int *second = first;
    cout << first << "    " << second;
    delete [] second;

    cout << "\n \n" << first << "   " << second;
    cout << endl;

    second = new int[1000000];

    for (int i=0; i< sizeof(second); i++)
    second[i] = first[i];

    cout << first << "   " << second;



    return 0;
}
