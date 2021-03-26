#include <iostream>
#include <string>
#include "Birthday.h"
#include "People.h"

using namespace std;

int main()
{

    Birthday me(41,23,2030);
    People Todimu("Todimu", me);

    Todimu.printInfo();


}
