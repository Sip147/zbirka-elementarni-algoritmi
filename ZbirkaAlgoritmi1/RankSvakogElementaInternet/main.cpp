#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<pair<string,int>>takmicari(n);
    vector<int>bodovi(n);
    for(int i=0;i<n;i++){
        int bod;
        string ime;
        cin>>ime>>bod;
        takmicari[i].first=ime;
        takmicari[i].second=bod;
        bodovi[i]=bod;
    }
    sort(bodovi.begin(),bodovi.end());

    for(auto takmicar: takmicari){
        int razmak_od_prvog=lower_bound(bodovi.begin(),bodovi.end(),takmicar.second)-bodovi.begin();
        cout<<takmicar.first<<' '<<n-razmak_od_prvog<<'\n';
    }

}
