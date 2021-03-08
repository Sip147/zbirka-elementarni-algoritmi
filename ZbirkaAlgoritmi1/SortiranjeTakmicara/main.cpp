#include <bits/stdc++.h>

using namespace std;

int n,bodovi;
string ime;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<pair<int, string>> takmicari(n);
    for(int i=0;i<n;i++){
        cin>>ime>>bodovi;
        takmicari[i]=make_pair(-bodovi,ime);
    }
    sort(takmicari.begin(),takmicari.end());
    for(int i=0;i<n;i++)cout<<takmicari[i].second<<' '<<-takmicari[i].first<<'\n';


}
