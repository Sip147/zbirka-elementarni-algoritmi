#include <bits/stdc++.h>

using namespace std;

int n,m;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cin>>m;
    int b;
    for(int i=0;i<m;i++){
        cin>>b;
        auto it=upper_bound(a.begin(),a.end(),b,greater<int>());
        cout<<it-a.begin()<<'\n';
    }
}
