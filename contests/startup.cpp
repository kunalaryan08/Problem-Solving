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


void solve(ll test_case){
    ll n, k; cin >> n >> k;
    int ans[k][2];
    vector<ll> vec;
    int b, c;
    for(int i = 0; i < k; ++i){
        cin >> b; cin >> c;
        ans[i][0] = b; ans[i][1] = c;
        vec.pb(c);
    }
    sort(vec.begin(), vec.end());
    ll sum = 0;
    if(n > k){
        for(int i = 0; i < k; ++i){
            sum += vec[i];
        }
    }else{
        for(int i = n - 1; i >= 0; --i){
            sum += vec[i];
        }
    }
    cout << sum << endl;
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