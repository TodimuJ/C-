#include <iostream>
#include <vector>
#include <string>

using namespace std;
 
 
class BankAccount
 {
     public:
     
    vector<double> account = {300, 40, 900, 600, 100, 200, 500};
    
    double current = 0;
    
   
   void withdraw(double w);
    
   void deposit(double d);
    
    double w;
    double d;
     
 };
 
  void BankAccount::withdraw(double w)
    {
         for(unsigned int i=0; i<account.size(); i++)
    {
        current += account.at(i);
    }
   
        if(current>w)
       { 
           current-=w;
           cout << "You have just withdrawn $" << w;
       }
        
        else
        cout << "You do not have enough money :(" ;
    }
    
    void BankAccount::deposit(double d)
    {
         for(unsigned int i=0; i<account.size(); i++)
    {
        current += account.at(i);
    }
   
        account.push_back(d);
        
        cout << "You have just deposited $" << d;
        
    }
 
 
int main()
{
     
    
 string d = "D";
 string w = "W";
 string D = "d";
 string W = "w";
double x;
double y;
string test;

    cout << "Do you want to withdraw or deposit? (Type in W or D)";
    cout << endl;
    cin >> test;

    
    if(test == "W" or test == "w")
    {    cout << endl;
        cout << "How much do you want to withdraw?";
        cout << endl;
        cin >> x;
        cout << endl;
        BankAccount take;
        take.withdraw(x);
        cout << endl;
    
    }
    
    else if(test== "d" or test == "D")
    {
        
        cout << "How much do you want to deposit?";
        cout << endl;
        cin >> y;
        cout << endl;
        
        BankAccount put;
        put.deposit(y);
        cout << endl;
        
    }
    
    
	
    else
    cout <<"You have typed in an invalid option.";
    
  return 0;
    
}