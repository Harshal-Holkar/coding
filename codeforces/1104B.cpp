#include <bits/stdc++.h>
using namespace std;
void solve(){
    int count = 0;
    string st;
    cin >> st;
    stack<char> s;
    for(auto i: st){
        if(s.empty()){
            s.push(i);
        }
        else{
            if(s.top() == i){
                s.pop();
                count++;
            }
            else{
                s.push(i);
            }
        }
    }
    if(count%2) cout << "Yes" << endl;
    else cout << "No" << endl;
}
int main()
{
    // freopen("i.txt", "r", stdin);
    // freopen("o.txt", "w", stdout);
int t=1;
//  cin >> t;
while(t--){
solve();
}
 return 0;
}