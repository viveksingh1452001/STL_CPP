#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 3;
    vector<int> v(n, 10);
    vector<int>::iterator itr;
    for (itr = v.begin(); itr != v.end(); ++itr)
    {
        cout << *itr << ' ';
    }
    return 0;
}