#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<char,int> &a,
              const pair<char,int> &b)
{
    return (a.first < b.first);
}

int main(){
                    int t = 1;
                    // cin >> t;
                    while(t--){
                                        string s = "logic";
                                        // cin >> s;
                                        vector<int > v;
                                        char l = s[0], r = s[s.length()-1];
                                        vector<pair<char,int>> q;
                                        for(int i = 0; i < s.length(); i++){
                                            q.push_back({s[i], i+1});
                                        }
                                        sort(q.begin(), q.end(), sortbysec);

                                        if(l <= r){

                                            for(auto i : q){
                                                if( i.first <= r && i.first >= l) v.push_back(i.second);
                                            }
                                        }
                                        else{
for(auto i : q){
                                                if( i.first <= l && i.first >= r) v.push_back(i.second);
                                            }
                                            reverse(v.begin(), v.end());
                                        }
                                        
                                        cout << abs(l-r) << " " << v.size() << endl;
                                        for(auto i : v) cout << i << " ";
                                        cout << endl;
                    }
}