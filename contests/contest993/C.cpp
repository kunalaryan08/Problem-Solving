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




void solve(ll test_case){
    ll m, a, b, c; cin >> m >> a >> b >> c;
    ll total = m * 2;
    vector<vector<int>> dp(2, vector<int>(m));
    // filling the dp with 0s
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < m; ++j) {
            dp[i][j] = 0;
        }
    }
    //  for a monkeys
    for(int i = 0; i < m and a > 0; ++i){
        dp[0][i] = 1;
        --a;
    }
    //  for b monkeys
    for(int i = 0; i < m and b > 0; ++i){
        dp[1][i] = 1;
        --b;
    }
    // for c monkeys
    for(int i = 0; i < m and c > 0; ++i){
        if(dp[0][i] != 1){
            dp[0][i] = 1;
            --c;
        }
    }
    if(c > 0){
        for(int i = 0; i < m and c > 0; ++i){
            if(dp[1][i] != 1){
                dp[1][i] = 1;
                --c;
            }
        }
    }
    // counting the no. of monkeys seated
    ll cnt = 0;
    // for(int i = 0; i < 2; ++i){
    //     for(int j = 0; j < m; ++j){
    //         if(dp[i][j] == 1){
    //             cnt++;
    //         }
    //     }
    // }
    for(int i = 0; i < m; ++i){
        if(dp[0][i] == 1)
            cnt++;
    }
    for(int i = 0; i < m; ++i){
        if(dp[1][i] == 1)
            cnt++;
    }
    cout << cnt << endl;

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