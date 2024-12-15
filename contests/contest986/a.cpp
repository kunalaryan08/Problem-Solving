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
    ll n, a, b; cin >> n >> a >> b;
    ll x = 0, y = 0;
    string s; cin >> s;
    string clone = s;
    for(int i = 0; i < 5; ++i){
        s = s + clone;
    }
    bool found = false;
    for(int i = 0; i < s.length(); ++i){
        if (s[i] == 'N') y++;
        else if (s[i] == 'S') y--;
        else if (s[i] == 'E') x++;
        else if (s[i] == 'W') x--;

        if(x > a or y > b){
            pn;
            found = true;
            break;
        }
        if(x == a and y == b){
            py;
            found = true;
            break;
        }
        if(!found) pn;
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
    // solve(1);
     
    return 0; 
}   