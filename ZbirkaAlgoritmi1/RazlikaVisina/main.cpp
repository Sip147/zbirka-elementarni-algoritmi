#include <bits/stdc++.h>

using namespace std;

int r,n,br;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>r;
    cin>>n;
    vector<int>visine(n);
    for(int i=0;i<n;i++)cin>>visine[i];

    sort(visine.begin(),visine.end());

    for(int i=0;i<n-1;i++){
        auto tren=visine.begin()+i;
        auto it=equal_range(tren,visine.end(),visine[i]+r);
        br+=it.second-it.first;
    }
    cout<<br;
}
