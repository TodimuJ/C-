// Example program
#include <iostream>
#include <string>
using namespace std;

void passbyRef(int *x);
void passbyVal(int x);


int main()
{
    int betty = 13;
    int sandy = 13;
    
    passbyVal(betty);
    passbyRef(&sandy);
    
    cout << "betty is now " << betty << endl;
    cout << "sandy is now " << sandy << endl;
    
    return 0;

    
}


void passbyVal(int x)
{
    x = 99;
}

void passbyRef(int *x)
{
    *x = 66;
}