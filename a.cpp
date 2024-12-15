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
    vector<ll>ans(4);
    cin>>ans[0]>>ans[1]>>ans[2]>>ans[3];
    ll sum= 0;
    for(auto it: ans){
        sum += it;
    }
    ll total = 15;
    cout << total-sum << endl;
} 

      
int main() 
{ 
    ll t=1;
    //  ll T;cin >> T;
    // while(t<=T){
    //   solve(t);
    //   t++;
    // }
    solve(1);
     
    return 0; 
}   