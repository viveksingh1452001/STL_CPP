#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 4, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr, arr + n);
    for (int x : v)
    {
        cout << x << endl;
    }
}