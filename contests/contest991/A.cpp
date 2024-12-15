#include <bits/stdc++.h> 
#define ll long long 
#define ull unsigned long long
#define sz(a) (int)(a).size()
#define pb push_back
#define  MOD 1e9+7;
#define pn cout<<"NO\n";
#define py cout<<"YES\n";
#define F first
#define S second
#define lli  long long int 
#define ii   pair<lli, lli> 
#define vii  vector<ii> 
#define vi  vector<lli>


// const int N = 1e6+100;
const int INF = 1000000005;
const ll mod = 1e9+7;
const int MAXN = 200005;

using namespace std; 
 
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
 
// typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>,
//  __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
// const int N = 200000;




void solve(ll test_case)
{
  ll n, m; cin >>n>>m;
  vector<string>s;
  for(int i = 0; i < n; ++i){
    string str;
    cin >> str;
    s[i] = str;
  }
  string ans;
  int i = 0;ll cnt = 0;
  while(i < s.size() and ans.length() <= m){
    ans += s[i];
    cnt++;
    i++;
  }
  cout << cnt-1 << endl;
}

      
int main() 
{
    ll t=1;
     ll T;cin >> T;
    while(t<=T){
      solve(t);
      t++;
    }
    // solve(1);
     
    return 0; 
}   