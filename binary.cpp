#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define FOR(i, s, e) for (int i = (s); (i) < (e); ++(i))

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<ll> res;
    while(t--){
        int n;
        cin >> n;
        string s = bitset<8>(n).to_string();
        string str;
        for(auto it : s){
            if(it == '1')
                str += '1';
        }
        int ans = stoi(str, 0, 2);
        res.pb(ans);
    }
    for(auto it : res){
        cout << it << endl;
    }

    return 0;
}