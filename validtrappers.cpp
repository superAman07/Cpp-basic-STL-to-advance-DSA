#include <bits/stdc++.h>
using namespace std;
bool validify(vector<int> v)
{
    for (int i = 1; i < v.size() - 1; i++)
    {
        if (((v[i + 1] % 2 == 0) == (v[i - 1] % 2 == 0) && ((v[i] % 2 == 0) != (v[i + 1] % 2 == 0))))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int>v{3,4,2,7,9,6,3,4};
    // vector<int> v{1, 1, 2, 3, 4, 4}; // false
    // vector<int>v{1,2,2,3,3,4};  // true
    // vector<int>v{1,1,2,2,3,3,4,4}; // true
    // vector<int>v{1,2,2,3,4,4};  // false
    // vector<int>v{2,2,2,2,3};  // true
    // vector<int>v{2,2,2,2,2};  // true
    // vector<int>v{1,2,3,4};  // false
    cout << std::boolalpha << validify(v);
}