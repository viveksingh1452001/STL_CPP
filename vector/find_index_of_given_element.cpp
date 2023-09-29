#include <bits/stdc++.h>

using namespace std;

void getIndex(vector<int> v, int k)
{
    vector<int>::iterator itr = find(v.begin(), v.end(), k);
    if (itr != v.end())
    {
        cout << itr + v.begin();
    }
}

int main()
{
    vector<int> v{1, 3, 45, 78, 23};
    int k = 78;
    getIndex(v, k);
    return 0;
}
