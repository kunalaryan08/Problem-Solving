#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int q;
    vector<int> ans(n);
    for(int i = 0; i < n; i++){
        cin>>ans[i];
    }
    cin>>q;
    sort(ans.begin(), ans.end());
    auto it = lower_bound(ans.begin(), ans.end(), q);
    if(it != ans.end()){
        int x = abs(*it - ans.size());
        cout<<x<<endl;
    }
    else{
        cout<<0<<endl;
    }
}