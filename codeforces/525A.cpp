#include<bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    unordered_map<int, int> mp;
    int n;
    cin >> n;
    string st;
    cin >> st; 
    
    // for small - for capital +
    for(int i = 0; i < 2*n - 2 ; i++){
        if(i%2 == 0){
            int x = st[i] - 'a';
            if(mp[x] > 0){
                count += mp[x];
                mp[x] = 0;
            }
            mp[x]--;
        }
        else{
            mp[st[i] - 'A']++;
        }
        
    }
    for (auto i : mp)
    {
        if(i.second > 0) {
            count += i.second;
        }
    }

    cout << count << endl;
    
    return 0;
}