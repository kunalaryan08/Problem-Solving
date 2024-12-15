#include<bits/stdc++.h>
#define ll long long int
using namespace std;

/*
int max(int n){
    int ans = -1;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if(x > ans)
            ans = x;
    }
    return ans;
}
*/

/*
void table(int n){
    for(int i = 1; i <= 12; ++i){
        cout << n << " * " << i << " = " << n * i << endl;
    }
}

int factorial(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return n * factorial(n - 1);
}

int trio_num(int K, int S){
     int count = 0;
    for (int X = 0; X <= K; ++X) {
        for (int Y = 0; Y <= K; ++Y) {
            int Z = S - X - Y;
            if (0 <= Z && Z <= K) {
                ++count;
            }
        }
    }
    return count; 
}
*/

// int gcd(int a, int b) {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }

int main(){
    int a, b;
    cin >> a >> b;
    if(a != b and b > a)
        cout << 1 << endl;
    // cout << gcd(a, b) << endl;
    // cout << max(n) << endl;
    // table(n);
    // while(t--){
    //     int n;
    //     cin >> n;
    //     cout << factorial(n) << endl;
    // }
    // cout << trio_num(k, s) << endl;
    return 0;
}
