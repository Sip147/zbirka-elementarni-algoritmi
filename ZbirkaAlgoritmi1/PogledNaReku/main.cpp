#include <bits/stdc++.h>

using namespace std;

int n,maks;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>visine(n);
    for(int i=0;i<n;i++)cin>>visine[i];
    vector<int>min_vis(n);
    for(int i=n-1;i>=0;i--){
        maks=max(maks,visine[i]);
        min_vis[i]=maks;
    }
    for(int i=0;i<n;i++)cout<<min_vis[i]<<'\n';

}
