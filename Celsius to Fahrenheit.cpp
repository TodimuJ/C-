#include <iostream>
#include <assign3.h>

double fact(int c);

using namespace std;

int main()
{
    cout << approxCosine(1.5,3);
}

double fact(int c)
{
int factorial=1;
for ( int i = 1; i <= c; i++ )
{
factorial *=i;
}
return factorial;
}

double approxCosine(double x, int terms)
{
double approxCosine;
double sum;
double value;
for (int i=1; i<=n; i++)
{
int factorial=1;
factorial*=i;
sum=((pow(x,i))/fact(i));
value+=sum;
}
approxCosine = 1+value;
return approxCosine;
}
