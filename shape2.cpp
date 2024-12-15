#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define FOR(i, s, e) for (int i = (s); (i) < (e); ++(i))

using namespace std;

// // int main(){
// //     int n;
// //     cin >> n;
// //     int i = 0;
// //     while(i < n){
// //         int space = n - i - 1;
// //         while(space){
// //             cout << " ";
// //             space--;
// //         }
// //         int j = 0;
// //         while(j < 2*i+1){
// //             cout << "*";
// //             j++;
// //         }
// //         cout << endl;
// //         i++;
// //     }
// // }

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int m, n;
//         cin >> m >> n;
//         int sum = 0;
//         int mini = min(n, m);
//         int maxi = max(n, m);
//         for(int i = mini + 1; i < maxi; ++i){
//             if(i % 2 != 0)
//                 sum += i;
//         }
//         cout << sum << endl;
//     }
// }

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         vector<ll> a(n), b(n);
//         FOR(i, 0, n){
//             cin >> a[i];
//         }
//         FOR(i, 0, n){
//             cin >> b[i];
//         }
//     }
// }

bool SoD(int n, int a, int b){
    int sum = 0;
    while(n){
        sum += (n % 10);
        n /= 10;
    }
    return sum >= a and sum <= b ? true : false;
}

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int sum = 0;
    for(int i = 1; i <= n; ++i){
        if(SoD(i, a, b)){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
