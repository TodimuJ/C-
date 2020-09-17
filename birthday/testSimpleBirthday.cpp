#include "simpleBirthday.h"
#include <iostream>
using std::cin;
using std::cout;

int main() 
{
    int curMonth, curDate;
    cout << "Current month (1 - 12): ";
    cin >> curMonth;

    cout << "Current date (1 - 31): ";
    cin >> curDate;

    if (curMonth < 1 || curMonth > 12 || curDate < 1 || curDate > 31) {
        cout << "You have entered an invalid month and/or date.\n";
        return 1;
    }

    int bdayMonth, bdayDate;
    cout << "Birthday month (1 - 12): ";
    cin >> bdayMonth;

    cout << "Birthday date (should be appropriate for the month): ";
    cin >> bdayDate;
    if (bdayMonth < 1 || bdayMonth > 12 || bdayDate < 1 || bdayDate > 31) {
        cout << "You have entered an invalid month and/or date.\n";
        return 1;
    }


    cout << simpleBirthday(curMonth, curDate, bdayMonth, bdayDate) << "\n";


	return 0;
}