#include <bits/stdc++.h>

using namespace std;

int n,m;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<long long>svetiljke(n);
    for(int i=0;i<n;i++)cin>>svetiljke[i];

    cin>>m;
    vector<long long>razl_osvetljenih_mesta(n+1,0);
    for(int i=0;i<m;i++){
        int pocinje, zavrsava;
        cin>>pocinje>>zavrsava;
        pocinje--;
        zavrsava--;
        razl_osvetljenih_mesta[pocinje]+=1;
        razl_osvetljenih_mesta[zavrsava+1]-=1;
    }

    vector<long long>stanovi_osvetljeni(n);  //stanovi
    stanovi_osvetljeni[0]=razl_osvetljenih_mesta[0];
    for(int i=1;i<n;i++){
        stanovi_osvetljeni[i]=stanovi_osvetljeni[i-1]+razl_osvetljenih_mesta[i];
    }

    sort(svetiljke.begin(),svetiljke.end());
    sort(stanovi_osvetljeni.begin(),stanovi_osvetljeni.end());

    long long rez=0;
    for(int i=0;i<n;i++){
        rez+=stanovi_osvetljeni[i]*svetiljke[i];
    }

    cout<<rez;
}
