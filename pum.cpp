#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define FOR(i, s, e) for (int i = (s); (i) < (e); ++(i))

using namespace std;

int main(){
    int n;
    cin >> n;
    int k = 1;
    for(int i = 0; i < n; ++i){
        for(int j = 1; j <= 4; ++j){
            if(k % 4 == 0)
                cout << "PUM" << endl;
            else{
                cout << k << " ";
            }
            k++;
        }
    }
    return 0;
}