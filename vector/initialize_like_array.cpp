#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{10, 20, 30, 40};
    cout << v.size() << " ";
    for (int x : v)
    {
        cout << x << " ";
    }
}