#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define FOR(i, s, e) for (int i = (s); (i) < (e); ++(i))

using namespace std;



int main(){
    int n;
    cin >> n;
    vector<int> ans;
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            ans.pb(0);
        } else if (i == 2) {
            ans.pb(1);
        } else {
            ans.pb(ans[i - 2] + ans[i - 3]);
        }
    }
    for(int i : ans){
        cout << i << " ";
    }    
    return 0;
}