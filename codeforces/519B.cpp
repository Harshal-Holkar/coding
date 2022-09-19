#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    unordered_map<int, int> mp;
    for(int i = 0; i < (2*n - 1); i++){
        cin >> x;
        mp[x]++;
    }
    
    int a = 0, b = 0;

    for (auto i : mp){
        if(i.second%2 == 1) {b = i.first; mp[i.first] -= 1;}
    }
    for(int i = 0; i < (n-2); i++){
        cin >> x;
        mp[x]++;
    }
    for (auto i : mp){
        if(i.second%3 == 2) a = i.first;
    }

    cout << b << endl;
    cout << a;

 return 0;
}