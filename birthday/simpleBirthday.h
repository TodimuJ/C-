#include <string>
using std::string;

/**
 * Returns a birthday message.  If the arguments indicate that today is the user's birthday then return the following:
 *  
 *      Happy birthday!
 * 
 * If the user's birthday already ocurred this year, output the following:
 * 
 *      Hope you had a good birthday!
 * 
 * If this year's birthday is still to come, output the following:
 * 
 *      Can I come to your party?
 * 
 * @param   curMonth     indicates the current month
 * @param   curDate      indicates the current date
 * @param   bdayMonth    indicates the birthday month
 * @param   bdayDate     indicates the birthday date
 * 
 * @return The birthday message as defined above.
 */
string simpleBirthday(int curMonth, int curDate, int bdayMonth, int bdayDate);