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
    string s;
    cin >> s;
    ll q; cin >> q;ll idx; char v;

    
    vector<string>res;
    for(int i = 0; i < q; ++i){
        cin >> idx >> v;
        s[idx - 1] = v;
        if(s.find("1100") != string::npos){
            res.pb("YES");
        }else
            res.pb("NO");
    }
    for(auto it : res)
        cout << it << endl;

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