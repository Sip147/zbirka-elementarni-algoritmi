#include <bits/stdc++.h>

using namespace std;

int n,maks,br;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<pair<int,int>>a(2*n);
    for(int i=0;i<2*n;i+=2){
        int poc,kraj;
        cin>>poc>>kraj;
        a[i]=make_pair(poc,1);
        a[i+1]=make_pair(kraj,-1);
    }

    sort(a.begin(),a.end());
    for(int i=0;i<2*n;i++){
        br+=a[i].second;
        maks=max(br,maks);
    }
    cout<<maks;
}
