#include<bits/stdc++.h>
using namespace std;
#define ll long long

void sum(ll &count , ll a, ll b){
    if(a <= 0 || b <= 0){
        return;
    }
    else if( b == 1){
        count += a;
        return;
    }
    else if(a == b){
        count += a;
        return;
    }
    else {
        count += a/b;
        a -= (a/b)*b;
        sum(count, max(a,b), min(a,b));
    }
}

int main(){
    ll a, b, count = 0;
    cin >> a >> b;
    sum(count, max(a,b), min(a,b));
    cout << count << endl;
    return 0;

}