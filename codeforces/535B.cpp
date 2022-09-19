#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<int> v;
    while(n){
        v.push_back(n%10);
        n/= 10;
    }

    n = v.size();
    long long l = pow(2, n) - 2, r = pow(2, n+1) - 2;

    while (l != r && n > 0)
    {
        long long mid = l/2 + r/2;
        if(v[n-1] == 4) r = mid;
        else l = mid;
        n--;
    }
    
    cout << r << endl;

    return 0;
}