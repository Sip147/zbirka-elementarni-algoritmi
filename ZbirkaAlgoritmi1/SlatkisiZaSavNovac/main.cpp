#include <bits/stdc++.h>

using namespace std;

int n,k;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>cene(n+1);
    cene[0]=0;
    int cena;
    for(int i=1;i<=n;i++){
        cin>>cena;
        cene[i]=cene[i-1]+cena;
    }
    cin>>k;
    int pocetni, budzet;
    for(int i=0;i<k;i++){
        int br=0;
        cin>>pocetni>>budzet;
        pocetni++;
        auto pocetak=cene.begin()+pocetni-1;
        int trazi=cene[pocetni-1]+budzet;
        auto poslednje_dete_it=lower_bound(pocetak,cene.end(),trazi);
        if(*poslednje_dete_it!=trazi)poslednje_dete_it--;
        cout<<poslednje_dete_it-(cene.begin()+(pocetni-1));

        cout<<'\n';
    }

}
