#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

/*
bool isLucky(int n){
    string s = to_string(n);
    for(auto it : s){
        if(it != '4' and it != '7'){
            return false;
        }
    }
    return true;
}
*/




// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int rev = 0;
//         if (n == 0) {
//             cout << "0";
//         }else{
//             while(n){
//                 cout << n % 10 << " ";
//                 n /= 10;
//             }
//         }
//     }
//     return 0;
// }
int main(){
    int n, m;
    while(cin >> m >> n){
        if(n <= 0 or n <= 0)
            break;
        int mini = min(m, n);
        int maxi = max(m, n);
        int sum = 0;
        for(int i = mini; i <= maxi; ++i){
            sum += i;
            cout << i << " ";
        }
        cout << "sum =" << sum << endl;
    }
}
