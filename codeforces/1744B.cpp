#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, q, e = 0, o = 1, se = 0 , so = 0, ne = 0, no = 0, temp;
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp%2){
            so += temp;
            no++;
        }
        else {
            se += temp; 
            ne ++;
        }
    }
    int m = 0, k = 0;
    while (q--)
    {
        int type, x;
        cin >> type >> x;
        if(type == 0){
            if(!(e%2)) {
                m = 1;
                se += x*ne;
                e += x;
            }
            if(!(o%2)) {
                k = 1;
                so += x*no;
                o += x;
            }
        }
        else{
            if((e%2)) {
                m = 1;
                se += x*ne;
                e += x;
            }
            if((o%2)) {
                k = 1;
                so += x*no;
                o += x;
            }
        }
     cout << so + se << endl;
    // m = 0; k = 0;
    }

    
}

int main()
{
    int t = 1;
    // freopen("i.txt", "r", stdin);
    // freopen("o.txt", "w", stdout);
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}