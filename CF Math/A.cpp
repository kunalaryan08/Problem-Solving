#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main(){
    int n;
    cin >> n;
    double ans = log2(n);
    if(floor(ans) == ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}