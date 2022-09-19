#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    string q;
    cin >> q;

    unordered_map<int, string> mp;
    int z = 0;
    vector<int> v;
    for (int i = 0; i < q.length(); i++)
    {
        int a = q[i] - 'a';
        if ((mp.find(a) == mp.end()) && k > 0)
        {
            mp[a] = q[i];
            z = a;
            k--;
            v.push_back(z);
        }
        else
        {
            mp[z] += q[i];
        }
    }

    if(k > 0) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    for (auto i : v)
    {
        cout << mp[i] << endl;
    }
    return 0;
}