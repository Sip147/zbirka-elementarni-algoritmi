#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<pair<int,int>>stanice(n);
    for(int i=0;i<n;i++)cin>>stanice[i].first>>stanice[i].second;

    int l=0,d=1;

    int rezervoar=stanice[l].second-stanice[l].first;
    while(rezervoar<0){
        l=d;
        d++;
        rezervoar=stanice[l].second-stanice[l].first;
    }

    bool prosao_krug=false;

    while(l<n && d!=l){
        rezervoar+=stanice[d].second-stanice[d].first;
        int old_d=d;
        while(rezervoar<0){
            l=d+1;
            d=l+1;
            if(d>=n){
                d=0;
                prosao_krug=true;
            }
            if(d>=n && prosao_krug){
                cout<<-1;
                return 0;
            }
            rezervoar=stanice[l].second-stanice[l].first;
        }
        if(d!=old_d){
            rezervoar+=stanice[d].second-stanice[d].first;
        }
        d++;
        if(d>=n){
            d=0;
            prosao_krug=true;
        }
        if(d>=n && prosao_krug){
            cout<<-1;
            return 0;
        }
    }
    cout<<d;
}
