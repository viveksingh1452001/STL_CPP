#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(2);
    v.push_back(9);
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}
