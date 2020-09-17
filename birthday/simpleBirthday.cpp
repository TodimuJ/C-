#include "simpleBirthday.h"
#include <iostream>
#include <string>

using namespace std; 

string simpleBirthday(int curMonth, int curDate, int bdayMonth, int bdayDate)
{
  string today = to_string(curMonth) + to_string(curDate);
  string birthday = to_string(bdayMonth) + to_string(bdayDate);

  string message = "";

  today = std::stoi(today);
  birthday = std::stoi(birthday);

  if(today == birthday)
  message =  "Happy Birthday!";

  else if(today > birthday)
  message =  "Hope you had a good birthday!";

  else
  message =  "Can I come to your party?";

   return message;
}



