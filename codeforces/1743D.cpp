// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// void solve(){
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     string s1, s0;
//     bool flag = 0;
//     for(int i = 0, j = 0; i<n; i++){
//         if(s[i] == '1') flag = 1;
//         if(flag) {
//             s1[j] = s[i]; j++;
//         }
//     }
//     flag = 0;
//     unordered_map<int, int> mp;
//     for(int i = 0, j = 0; i< s1.size(); i++){
//         if(s1[i] == '0') flag = 1;
//         if(flag) {
//             s0[j] = s1[i]; j++;
//         }
//     }
//     int s00 = s0.size();
//     for (int i =  s0.size() - 1; i >= 0; i--){
//         if(s0[i] == '0'){
//             s00 = i+1;
//             break;
//         }
//     }
//     for (int i = 0; i < s00; i++)
//     {
//         mp[i] = (s0[i]-'0');
//     }
//     ll mx = INT_MIN, mxInd = 0;
//     for (int i = 0; i <= n - s00; i++)
//     { 
//         int j = i, count = 0;
//         for ( int z = 0; z < s00; z++)
//         {
//             if(s1[z+i] != mp[z]) count++;
//         }
//             if(mx <= count ) {
//                 mx = count;
//                 mxInd = i;
//             }      
//     }
// string sans = "";
// int h = 0;
//     for (int i = 0; i < s1.size(); i++)
//     {
//         if(n - s0.size() < i)
//         sans+= 
//     }
    
    

    
// }
// int main()
// {
//      int t=1;
//      freopen("i.txt", "r", stdin);
//      freopen("o.txt", "w", stdout);
//      cin >> t;
//      while(t--){
//      solve();
//      }
//  return 0;
// }