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
vector<ll> ans;




void solve(ll test_case){
    string s;
    cin >> s;
    bool help = false;
    ll a, b; cin >> a >> b;
    ll zero = count(s.begin(), s.end(), '0');
    ll one = count(s.begin(), s.end(), '1');
    ll other = s.length() - zero - one;

    string str = s;ll cnt = 0;
    if(zero == s.length() or one == s.length()){
        ans.pb(0);
    }
    else if(other){
        ans.pb(-1);
    }
    if(a > b){
        sort(str.begin(), str.end());
    }else{
        sort(str.begin(), str.end(), greater<char>());
    }
    for(int i = 0; i < str.length(); ++i){
        if(str[i] != s[i])
            cnt++;
    }
    if(!cnt){ 
        ans.pb(cnt);
    }
}

      
int main() 
{ 
    ll t=1;
     ll T;cin >> T;
    while(t<=T){
      solve(t);
      t++;
    }
    for(ll i = 0; i < ans.size(); ++i){
        if(i != ans.size()-1){
            if(ans[i] == -1){
                cout << "INVALID" << endl;
            }
            else 
                cout << ans[i] << endl;
        }else{
            if(ans[i] == -1){cout << "INVALID";}
            else 
                cout << ans[i];
        }
    }
    // solve(1);
     
    return 0; 
}   