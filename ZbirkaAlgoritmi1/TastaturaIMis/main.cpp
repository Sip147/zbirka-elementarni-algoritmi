#include <bits/stdc++.h>

using namespace std;

int n,m,budzet,maks;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>t(n);
    for(int i=0;i<n;i++)cin>>t[i];

    cin>>m;
    vector<int>mis(m);
    for(int i=0;i<m;i++)cin>>mis[i];

    cin>>budzet;

    sort(mis.begin(),mis.end());

    for(int i=0;i<n;i++){
        int ostalo=budzet-t[i];
        if(ostalo>0){
            auto it=upper_bound(mis.begin(),mis.end(),ostalo);
            it--;
            maks=max(maks,*it+t[i]);
        }
    }
    cout<<maks;
}
