#include <iostream>
#include <unordered_map>

using namespace std;

void frequency(int arr[], int n)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << (it->first) << " occurs " << (it->second) << " times\n";
    }
}
int main()
{
    int x[] = {10, 12, 10, 15, 10, 20, 12, 12};
    int n = sizeof(x) / sizeof(x[0]);
    frequency(x, n);

    return 0;
}