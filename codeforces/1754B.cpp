#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, temp;
    cin >> n;
    temp = n;
    if(n%2) {
        while (n != temp/2)
        {
            if(n-temp/2 == 1) {cout << 1 << endl; return;}
            cout << n - temp/2 << " " << n << " ";
            n--;
        }
    }
        while (n != temp/2)
        {
            cout << n - temp/2 << " " << n << " ";
            n--;
        }
        
        cout << endl;

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