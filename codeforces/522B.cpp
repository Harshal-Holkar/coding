#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , x;
    long long W = 0, count = 0, m1 = 0, i1 = -1, m2 = 0, i2 = -1;
    cin >> n;
    vector<vector<int>> v;
    vector<int> I;
    for(int i = 0; i < 2*n; i++){
        cin >> x;
        I.push_back(x);

        if(i % 2){
            if(x > m2){
                if(x >= m1){
                    swap(m1,m2);
                    // swap(i1,i2);
                    m1 = x;
                    i1 = i/2;
                }
                else{
                    m2 = x;
                    // i2 = i/2;
                }
            }
            
            v.push_back(I);
            I.clear();
            
        }
        else{
            W += x;
        }
    }

    for(int i = 0; i < n; i++){
        if(i == i1)
        count = (W - v[i][0])*m2;
        else 
        count = (W - v[i][0])*m1;
    cout << count << " ";
    }

    return 0;
}