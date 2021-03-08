#include <bits/stdc++.h>

using namespace std;

int n,m;
long long zarade[100000];

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    int zarada;
    cin>>zarada;
    zarade[0]=zarada;
    for(int i=1;i<n;i++){
        cin>>zarada;
        zarade[i]=zarade[i-1]+zarada;
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int pocetni, krajnji;
        cin>>pocetni>>krajnji;
        if(pocetni==0)cout<<zarade[krajnji]<<'\n';
        else cout<<zarade[krajnji]-zarade[pocetni-1]<<'\n';
    }


}
