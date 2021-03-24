#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    vector<int> vol;
    
    vol.push_back(4);
    vol.push_back(5);
    vol.push_back(13);
    vol.push_back(78);
    vol.push_back(90);
    
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    
    for(int i=0; i<vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    
    cout << endl;
    cout << vec.size() << endl;
    
    vec.insert(vec.begin()+ vec.size(), 3);
    
    for(int i=0; i<vec.size(); i++)
    {
        cout << vec.at(i) << " ";
    }
    
    
    cout << endl;
    cout << vec.size() << endl;
    
    
     for(int i=0; i<vol.size(); i++)
    {
        cout << vol.at(i) << " ";
    }
     cout << endl;
    cout<< vol.size();
    cout << endl;
    
    vol.push_back(167);
    cout << vol.at(vol.size()-1) << endl;
    
     for(int i=0; i<vol.size(); i++)
    {
        cout << vol.at(i) << " ";
    }
    
 
    return 0;
}

