#include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
string s;
#define MAXN 200000
#define LG 26
long long int P=1e9+7;
# define ll long long 
long long int power(long long int x, long long  int y,ll p)
{
    long long  int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

vector<int> lp(string text)
{
    int N = text.length();
   
 
    // Position count
    N = 2 * N + 1;
 
    // LPS Length Array
    vector<int>L(N);
    L[0] = 0;
    L[1] = 1;
 
    // centerPosition
    int C = 1;
 
    // centerRightPosition
    int R = 2;
 
    // currentRightPosition
    int i = 0;
 
    // currentLeftPosition
    int iMirror;
    int expand = -1;
    int diff = -1;
    int maxLPSLength = 0;
    int maxLPSCenterPosition = 0;
    int start = -1;
    int end = -1;
 
    // Uncomment it to print LPS Length array
    // printf("%d %d ", L[0], L[1]);
    for (i = 2; i < N; i++) {
        // Get currentLeftPosition iMirror
        // for currentRightPosition i
        iMirror = 2 * C - i;
 
        // Reset expand - means no
        // expansion required
        expand = 0;
        diff = R - i;
 
        // If currentRightPosition i is
        // within centerRightPosition R
        if (diff >= 0) {
 
            // Case 1
            if (L[iMirror] < diff)
                L[i] = L[iMirror];
 
            // Case 2
            else if (L[iMirror] == diff && R == N - 1)
                L[i] = L[iMirror];
 
            // Case 3
            else if (L[iMirror] == diff && R < N - 1) {
                L[i] = L[iMirror];
 
                // Expansion required
                expand = 1;
            }
 
            // Case 4
            else if (L[iMirror] > diff) {
                L[i] = diff;
 
                // Expansion required
                expand = 1;
            }
        }
        else {
            L[i] = 0;
 
            // Expansion required
            expand = 1;
        }
 
        if (expand == 1) {
 
            // Attempt to expand palindrome centered
            // at currentRightPosition i. Here for odd
            // positions, we compare characters and
            // if match then increment LPS Length by ONE
            // If even position, we just increment LPS
            // by ONE without any character comparison
 
            while (((i + L[i]) < N && (i - L[i]) > 0)
                   && (((i + L[i] + 1) % 2 == 0)
                       || (text[(i + L[i] + 1) / 2]
                           == text[(i - L[i] - 1) / 2]))) {
                L[i]++;
            }
        }
 
        // Track maxLPSLength
        if (L[i] > maxLPSLength) {
            maxLPSLength = L[i];
            maxLPSCenterPosition = i;
        }
 
        // If palindrome centered at
        // currentRightPosition i expand
        // beyond centerRightPosition R,
        // adjust centerPosition C based
        // on expanded palindrome.
        if (i + L[i] > R) {
            C = i;
            R = i + L[i];
        }
 
        // Uncomment it to print LPS Length array
        // System.out.print("%d ", L[i]);
    }
    return L;
    
}

string S="abbab";
vector<pair<ll,ll>>hash_arr;
ll m1=31,p1=1e9+7,m2=37,p2=1e9+9;
vector<ll>pp1,pp2;

ll mi(ll a,ll p){
return power(a, p - 2,p);
}

    //ll MAXN =200000+1;
   // ll LG = 26;
	int rnk[LG][MAXN], n;
	int tmp[MAXN];
	int LST[MAXN], NXT[MAXN];
	int lg[MAXN];
   /// string s="abbac";
	void build(){
		n = s.size();
		for(int i = 0 ; i < n ; i ++)
			tmp[i] = s[i] - 'a';  
		sort(tmp , tmp + n);
		int sz = unique(tmp , tmp + n) - tmp;
		for(int i = 0 ; i < sz ; i ++)
			LST[tmp[i]] = i;
		for(int i = 0 ; i < n ; i ++)
			rnk[0][i] = LST[s[i] - 'a'];
		for(int j = 1 ; (1 << j) - 1 < n ; j ++){
			for(int i = 0 ; i + (1 << (j-1)) - 1 < n ; i ++)LST[i] = -1;
			for(int i = n - (1 << j) ; ~i ; i --)
				NXT[i] = LST[rnk[j - 1][i + (1 << (j - 1))]] , LST[rnk[j - 1][i + (1 << (j - 1))]] = i;
			int pos = 0;
			for(int i = 0 ; i + (1 << (j-1)) - 1 < n ; i ++)
				for(int k = LST[i] ; ~k ; k = NXT[k])
					tmp[pos++] = k;
			for(int i = 0 ; i + (1 << (j-1)) - 1 < n ; i ++)LST[i] = -1;
			for(int i = n - (1 << j) ; ~i ; i --)
				NXT[i] = LST[rnk[j - 1][tmp[i]]] , LST[rnk[j - 1][tmp[i]]] = i;
			pos = 0;
			for(int i = 0 ; i + (1 << (j-1)) - 1 < n ; pos += (LST[i] > -1) , i ++)
				for(int k = LST[i] ; ~k ; k = NXT[k])
					rnk[j][tmp[k]] = pos ,
					pos = ((~NXT[k]) ? ((rnk[j - 1][tmp[k] + (1 << (j - 1))] ^ rnk[j - 1][tmp[NXT[k]] + (1 << (j - 1))]) ? pos + 1 : pos) : pos);
		}
		for(int i = 2 ; i <= n ; i ++)
			lg[i] = lg[i >> 1] + 1;
	}

	pair < int , int > get(int l , int r){
		return pair < int , int > (rnk[lg[r - l]][l] , rnk[lg[r - l]][r - (1 << lg[r - l]) + 1]);
	}
	bool cmp1(int l, int r, int L, int R){
		int sz = min(r - l , R - L);
		if(get(l , l + sz) == get(L , L + sz))
			return (r - l) < (R - L);
		return get(l , l + sz) < get(L , L + sz);
	}


bool cmp(vector<int>s1,vector<int>s2){
    
 return cmp1(s1[0],s1[1],s2[0],s2[1]);
}

// Merge two subarrays L and M into arr
void merge(vector<vector<int>>&arr, int p, int q, int r) {
  
  // Create L ← A[p..q] and M ← A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  vector<vector<int>> L(n1,vector<int>(2)), M(n2,vector<int>(2));

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
      //L[i] <= M[j];
    if (cmp(L[i],M[j])) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(vector<vector<int>>&arr, int l, int r) {
  if (l < r) {
    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}




int main() {
  
	int test=01;
  
	if(test){
        int t=1;
       // cin>>t;
       while(t--){

int n;cin>>n;
cin>>s;
S=s;
vector<int>vv=lp(s);
build();
vector<pair<ll,ll>>hash_pre;

//hash_pre.push_back({0,0});

ll s1=0,s2=0,pow1=1,pow2=1;

for(auto i:s){
    s1+=((pow1)*(ll)(i-'a'+1))%p1;
    s2+=((pow2)*(ll)(i-'a'+1))%p2;
    s1%=p1;
    s2%=p2;
    pow1=(pow1*m1)%p1;
    pow2=(pow2*m2)%p2;
    hash_pre.push_back({s1,s2});
    
}
hash_arr=hash_pre;
map<pair<ll,ll>,array<ll,2>>m;
ll mim1=mi(m1,p1),mim2=mi(m2,p2);

pp1.push_back(1);
pp2.push_back(1);
for(int i=1;i<n;i++){
    pp1.push_back((pp1[i-1]*mim1)%p1);
    pp2.push_back((pp2[i-1]*mim2)%p2);
}
for(int i=0;i<2*n+1;i++){
    if(vv[i]==0)continue;
    if(i%2==0){
      // int idx=(i-1)/2;
       // ll d=v[i]/2;
        int i1=i/2-vv[i]/2,i2=i/2+vv[i]/2-1;
        while(i1<i2){
            ll l=i1,r=i2;
            pair<ll,ll> x;
            if(l>0)
            x=hash_pre[l-1];
            else x={0,0};
            pair<ll,ll> hash={(((hash_pre[r].first-x.first+2*p1)%p1)
            *pp1[l])%p1,
            (((hash_pre[r].second-x.second+2*p2)%p2)
            *pp2[l])%p2};
           
            if(m.find(hash)!=m.end()){
              
               break;
            }
            else{
               m[hash][0]=l;
               m[hash][1]=r;
            }
            i1++;i2--;
           
        }
    }
    else{
        int idx=(i-1)/2;
        ll d=vv[i]/2;
        for(int i=idx-d;i<=idx;i++){
            ll l=i,r=idx+idx-i;
            pair<ll,ll> x;
            if(l>0)
            x=hash_pre[l-1];
            else x={0,0};
            pair<ll,ll> hash={(((hash_pre[r].first-x.first+2*p1)%p1)
            *pp1[l])%p1,
            (((hash_pre[r].second-x.second+2*p2)%p2)
            *pp2[l])%p2};
           
            if(m.find(hash)!=m.end()){
              
               break;
            }
            else{
                m[hash][0]=l;
                m[hash][1]=r;
            }
           
        }
    }
}
 n=m.size();
vector<vector<int>>a(n,vector<int>(2));

/*
for(auto i:m){
    for(int j=i.second[0];j<=i.second[1];j++)cout<<s[j];cout<<" ";
    cout<<endl;
}
cout<<endl;*/
int count=0;
for(auto i:m){
    a[count][0]=i.second[0];
    a[count][1]=i.second[1];
    count++;
}

mergeSort(a,0,n-1);
/*
for(int i=0;i<n;i++){
    for(int j=a[i][0];j<=a[i][1];j++){
        cout<<s[j];
    }
    cout<<endl;
}*/
ll arr[n];
ll ss=0;
for(int i=0;i<n;i++){
    ss+=(a[i][1]-a[i][0]+1);
    arr[i]=ss;
    //cout<<arr[i]<<" ";
}
//cout<<endl;

int q;cin>>q;
while(q--){
   
    ll L,R;
    cin>>L>>R;
    if(R>arr[n-1]){cout<<"-1\n";continue;}
    if(L==R && L==arr[n-1]){
        cout<<s[a[n-1][1]]<<endl;
        continue;
    }
    ll idx=upper_bound(arr,arr+n,L)-arr;
    ll num=R-L+1;
    if(idx!=0 && arr[idx-1]==L){

      cout<<s[a[idx-1][1]];
       num--; 
       L++;
    }
    if(num==0){
        cout<<endl;continue;
    }
    ll idx2;
    if(idx==0)idx2=L-1;
    else idx2=L-arr[idx-1]-1;
    for(int i=idx;i<n;i++){
        for(int j=idx2+a[i][0];j<=a[i][1];j++){
            printf("%c",s[j]);
            num--;
            if(num==0)break;
        }
        if(num==0)break;
        idx2=0;
    }
    printf("\n");
    

}



     }
    }
    

	else {
  
}
}