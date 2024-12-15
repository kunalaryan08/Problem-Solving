#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

// 5
// 3 2 5 1 7

int main(){
    int n;
    cin >> n;
    vector<ll> ans(n);
    for(int i = 0; i < n; ++i){
        cin >> ans[i];
    }
    ll sum = 0;
    for(int i = 1; i < n; ++i){
        if(ans[i - 1] > ans[i]){
            sum += (ans[i - 1] - ans[i]);
            ans[i] = ans[i - 1];
        }
    }
    cout << sum << endl;
}