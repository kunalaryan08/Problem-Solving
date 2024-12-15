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

// ll gcd(ll a, ll b) {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }
ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve(ll test_case){
    ll a, b, k;
    cin >> a >> b >> k;
    vector<ll>ans;
    ll num = gcd(a,b);
    for(int i = 1; i*i <= num; ++i){
        if(num % i == 0){
            ans.pb(i);
            if(i != num/i)
                ans.pb(num / i);
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans[ans.size() - k] << endl;
} 

      
int main() 
{
    // ll t=1;
    //  ll T;cin >> T;
    // while(t<=T){
    //   solve(t);
    //   t++;
    // }
    solve(1);
     
    return 0; 
}   