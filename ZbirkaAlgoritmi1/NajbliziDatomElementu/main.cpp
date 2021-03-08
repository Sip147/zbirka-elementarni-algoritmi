#include <bits/stdc++.h>

using namespace std;

int n,m;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>rekl(n);
    for(int i=0;i<n;i++)cin>>rekl[i];
    cin>>m;
    for(int i=0;i<m;i++){
        int vreme;
        cin>>vreme;
        auto itmanji=lower_bound(rekl.begin(),rekl.end(),vreme);
        if(itmanji!=rekl.begin())itmanji--;
        auto itveci=lower_bound(rekl.begin(),rekl.end(),vreme);
        auto itmanj=lower_bound(rekl.begin(),rekl.end(),*itmanji);
        if(itmanji==rekl.begin())itmanj=itmanji;

        if(vreme-*itmanj<=*itveci-vreme || itveci==rekl.end()){
            cout<<itmanj-rekl.begin()<<'\n';
            continue;
        }
        cout<<itveci-rekl.begin()<<'\n';
    }
}
