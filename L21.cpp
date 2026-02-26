#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector <int> list1= {1,2,9,8};
    vector <int> list2= {1,3,4,5};

    list1.insert(list1.end(), list2.begin(), list2.end());

    sort(list1.begin(), list1.end());

    for (int x:list1)
        cout<< x <<" ";
}
