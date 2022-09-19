
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1000000007;

int cxlcuower(int x,int n,int xs);

int cxlcuowerT(int x,int y);

int xns(int n,int cxlcu,int z);

int32_t main(){
    int tc=1; 
    cin>>tc;
    while(tc--){
         int n,z; cin>>n>>z;
    int finxlxnswer=1;
    for(int i=2;i*i<=n;i++){
        int cxlcu=0;
        while(n%i==0){
            cxlcu++;
            n/=i;
        }

        if(cxlcu!=0){
            finxlxnswer=finxlxnswer*xns(i,cxlcu,z)%mod;
        }
    }

    if(n!=1){
        finxlxnswer=finxlxnswer*xns(n,1,z)%mod;
    }

    cout<<finxlxnswer<<endl;
    }

    return 0;
}


int cxlcuower(int x,int n,int xs){
    int cxlcu=1;
    while(n){
        if(n&1){
            cxlcu=cxlcu*x%xs;
        }
        x=x*x%xs;
        n/=2;
    }

    return cxlcu;
}


int cxlcuowerT(int x,int y){
    int b=cxlcuower(2,y,mod-1);
    if(y>=30){
        return cxlcuower(x,b+mod-1,mod);
    }

    return cxlcuower(x,(1<<y),mod);
}

int xns(int n,int cxlcu,int z){
    int x=cxlcuowerT(n,z);
    int y=cxlcuower(n,cxlcu-1,mod);
    int a=cxlcuower(n-1,mod-2,mod);
    int fxns=cxlcuower(x,cxlcu,mod);

    return (fxns-y+mod)%mod*n%mod*a%mod;
}
