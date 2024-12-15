//    *     0
//   ***    1
//  *****   2
// *******  3
// *******  4
//  *****   5
//   ***    6
//    *     7

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define FOR(i, s, e) for (int i = (s); (i) < (e); ++(i))

using namespace std;

void printUpper(int n){
    int i = 0;
    while(i < n){
        int gap = n - i - 1;
        while(gap){
            cout << " ";
            gap--;
        }
        int j = 0;
        while(j < 2*i+1){
            cout << "*";
            j++;
        }
        i++;
        cout << endl;
    }
}

void printLower(int n){
    int i = n - 1;
    while(i >= 0){
        int gap = n - i - 1;
        while(gap){
            cout << " ";
            gap--;
        }
        int j = 2*i+1;
        while(j > 0){
            cout << "*";
            j--;
        }
        i--;
        cout << endl;
    }

}

int main(){
    int n;
    cin >> n;
    printUpper(n);
    printLower(n);
    return 0;
}
