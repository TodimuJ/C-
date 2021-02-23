#include <iostream>

using namespace std;

int main()
{
cout << "Find the perfect number between x and y" <<endl;
cout << endl;
int x, y;
cout<<"Enter the nymber x:" << endl;
cin >> x;
cout<<"Enter the nymber y:" << endl;
cin >> y;

for(int i=1; i<y; y--)
{
    int sum=0;
    int z=1;
    while(z<y)
    {
        if(y%z==0){
            sum=sum+z;
        }
        z++;
    }
    if(sum==y){
        cout<< y << " is the perfect number"<< endl;
    }
}

return 0;
}