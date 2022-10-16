#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n, one = 0, zero = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            one++;
        else
        {
            zero++;
        }
    }
    int i = 0, j = n - 1, ans = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if(arr[i] == 1) break;
    //     zero--;
    // }
    // for (int i = n-1; i >= 0; i--)
    // {
    //     if(arr[i] == 0) break;
    //     one--;
    // }
    

    while (i < j)
    {
        while(i < n && arr[i] == 0) {i++;}
        while(j >= 0 && arr[j] == 1) {j--;}
        // cout << i << " " << j << " " << ans << endl;
        if(i < j) ans++;
        int k = i, l = j;
        
        if (arr[i] == 0)
            i++;
        if (arr[j] == 1)
            j--;
        if (arr[i] == 1 && arr[j] == 0)
        {
            // ans++;
            i++;
            j--;
        }
        i = k; j = l;
        i++; j--;
    }
    cout << ans << endl;
}
int main()
{
    int t = 1;
    //  freopen("i.txt", "r", stdin);
    //  freopen("o.txt", "w", stdout);
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}