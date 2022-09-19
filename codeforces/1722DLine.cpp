
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1000000007;

// Thanku guysss


int power(int a,int n,int MOD){
    int p=1;
    while(n){
        if(n%2==1){
            p=p*a%MOD;
        }
        a=a*a%MOD;
        n/=2;
    }

    return p;
}


int powerT(int a,int b){
    int x=power(2,b,mod-1);
    if(b>=30){
        return power(a,x+mod-1,mod);
    }

    return power(a,(1<<b),mod);
}

int ans(int n,int p,int k){
    int x=powerT(n,k);
    int y=power(n,p-1,mod);
    int z=power(n-1,mod-2,mod);
    int result=power(x,p,mod);

    return (result-y+mod)%mod*n%mod*z%mod;
}


void solve(){
    int n,k; cin>>n>>k;
    int finalAnswer=1;
    for(int i=2;i*i<=n;i++){
        int p=0;
        while(n%i==0){
            p++;
            n/=i;
        }

        if(p!=0){
            finalAnswer=finalAnswer*ans(i,p,k)%mod;
        }
    }

    if(n!=1){
        finalAnswer=finalAnswer*ans(n,1,k)%mod;
    }

    cout<<finalAnswer<<endl;

    return;
}

int32_t main(){
    int tc=1; 
    cin>>tc;
    while(tc--){
        solve();
    }

    return 0;
}