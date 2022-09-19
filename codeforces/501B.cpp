#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string st1, st2;
    unordered_map<string, string> mp;
    for(int i = 0; i < n; i++){
        // cout << i << " ";
        cin >> st1 >> st2;
       if( mp.find(st1) == mp.end())
        mp[st2] = st1;
        else{
            // mp[st1].first = st2;
            mp[st2] = mp[st1];
            mp.erase(st1);
        }
    }
    cout << mp.size() << endl;
    for (auto i : mp) {
        cout << i.second << " " << i.first << endl;
    }
    
 return 0;
}