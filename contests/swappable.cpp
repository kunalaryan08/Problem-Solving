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
    ll n; cin >> n;
    vector<ll> ans(n);
    for(int i = 0; i < n; ++i) cin >> ans[i];

    // sort(ans.begin(), ans.end());
    // for(ll it : ans){
    //     cout << it << ", ";
    // }
    // cout << endl;
    ll num = (n*(n-1)/2);
    // cout << num << endl;
    map<ll , ll > mp;
    for(ll i : ans){
        mp[i]++;
    }
    for(auto it : mp){
        if(it.second > 1){
            num -= (it.second * (it.second - 1) / 2);
        }
    }
    cout << num << endl;
}

      
int main() 
{
    //  ll T;cin >> T;
    // while(t<=T){
    //   solve(t);
    //   t++;
    // }
    solve(1);
     
    return 0; 
}   