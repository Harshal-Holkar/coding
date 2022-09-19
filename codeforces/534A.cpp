#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 1 || n == 2){
        cout << 1 << endl;
        cout << 1 << endl;
        return 0;
    }
    else if(n == 3){
        cout << 2 << endl;
        cout << 1 << " " << 3 << endl;
        return 0;
    }

    int k = n - 1, j = 0;
    cout << n << " ";
    for(int i = 0; i < n; i++){
        int z = k - 2*j;
        j++;
        cout << z << " ";
        if(z == 2 || z == 1) {k = n; j = 0;}
    }
    cout << endl;
}