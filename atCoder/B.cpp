#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , l;
    cin >> n >> l;
    set<string> st;
    string st1;
    for(int i = 0; i < n; i++){
        cin >> st1;
        st.insert(st1);
    }
    st1 = "";
    for(auto i : st){
        st1 += i;
    }
    cout << st1 << endl;
return 0;
}