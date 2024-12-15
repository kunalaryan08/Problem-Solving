#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

// void swap(vector<ll>& ans, int i, int j){
//     ll temp = ans[i];
//     ans[i] = ans[j];
//     ans[j] = temp;
// }

// void cyclicSort(vector<ll>& ans, int n){
//     int i = 0;
//     while(i < n){
//         if(ans[i] > 0 and ans[i] <= n and ans[i] != ans[ans[i] - 1]){
//             swap(ans, i, ans[i] - 1);
//         }else{
//             i++;
//         }
//     }
// }

// int missingNum(vector<ll>& ans, int n){
//     for(int i = 0; i < n; ++i){
//         if(ans[i] != i + 1){
//             return i + 1;
//         }
//     }
//     return n;
// }

ll missingNum(vector<ll>& ans, int n){
    ll sum1, sum = 0;
    sum1 = n*(n+1)/2;
    for(ll it : ans){
        sum += it;
    }
    return sum1 - sum;
}
int main(){
    int n;
    cin >> n;
    vector<ll> ans(n, 0);
    for(int i = 0; i < n - 1; ++i){
        cin >> ans[i];
    }
    // ans[n - 1] = 0;
    // cyclicSort(ans, n);
    cout << missingNum(ans, n) << endl;
}