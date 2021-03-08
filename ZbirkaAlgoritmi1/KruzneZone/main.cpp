#include <bits/stdc++.h>

using namespace std;

int n,m;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<double>zone(n);
    cin>>zone[0];
    for(int i=1;i<n;i++){
        cin>>zone[i];
        zone[i]+=zone[i-1];
    }

    cin>>m;
    for(int i=0;i<m;i++){
        double x,y;
        cin>>x>>y;
        double udaljenost=sqrt(x*x+y*y);
        auto it=lower_bound(zone.begin(),zone.end(),udaljenost);
        if(it==zone.end()){
            cout<<"izvan"<<'\n';
            continue;
        }
        cout<<it-zone.begin()<<'\n';
    }



}
