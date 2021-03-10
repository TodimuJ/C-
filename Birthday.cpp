#include "Birthday.h"
#include "People.h"
#include <iostream>

using namespace std;

Birthday::Birthday(int d, int m, int y)
{
        date = d;
        month = m;
        year = y; 
};

void Birthday::printDate()
{
    cout << date << "/" << month << "/" << year;
}
