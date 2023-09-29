#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1{3, 6, 8, 9};
    vector<int> vec2(vec1.begin(), vec1.end());
    for (int x : vec2)
    {
        cout << x << endl;
    }
    return 0;
}