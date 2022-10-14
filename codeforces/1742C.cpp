#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    vector<vector<char>> v;
    vector<char> c;
    char x;
    for(int i = 0; i< 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> x;
            c.push_back(x);
        }
        v.push_back(c);
        c.clear();
    }
    int sum = 0, sum1 = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if(v[i][j] == 'R') sum++;
            if(v[j][i] == 'R') sum1++;
        }
        if(sum == 8 || sum == 8){
            cout << "R" << endl;
            return;
        }  
        else sum = 0;   
    }
    cout << "B" << endl;
    
}
int main()
{
     int t=1;
    //  freopen("i.txt", "r", stdin);
    //  freopen("o.txt", "w", stdout);
     cin >> t;
     while(t--){
     solve();
     }
 return 0;
}