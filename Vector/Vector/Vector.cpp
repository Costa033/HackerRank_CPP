#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    // First Problem in Vector
   /* vector<int> vec;
    int size;
    cin >> size;
    int v;

    for (int i = 0;i < size;i++)
    {
        cin >> v;
        vec.push_back(v);
    }

    sort(vec.begin(), vec.end());
    for (int i = 0;i < size;i++)
    {
        cout << vec[i]<<" ";
    }*/


    //Second problem

    vector<int> ve;
    int sizo;
    cin >> sizo;
    int item;

    for (int i = 0;i < sizo;i++)
    {
        cin >> item;
        ve.push_back(item);
    }

    int position1,position2,position3;
    cin >> position1;
    cin >> position2 >> position3;
    ve.erase(ve.begin() + (position1 - 1));
    
    ve.erase(ve.begin() + (position2 - 1), ve.begin() + (position3 - 1));
    int n = position3 - position2;
   
    
    ve.resize(sizo - n-1);

    //First output
    cout << ve.size() << endl;

    ve.shrink_to_fit();

    //Second output
    for (int j = 0;j < ve.size();j++)
    {
        cout << ve[j] << " ";
    }

    return 0;
}