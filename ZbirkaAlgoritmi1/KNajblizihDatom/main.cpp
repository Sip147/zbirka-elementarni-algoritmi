#include <bits/stdc++.h>

using namespace std;

int n,m;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>protivnici_rast(n);
    vector<int>protivnici_opad(n);
    for(int i=0;i<n;i++){
        int protivnik;
        cin>>protivnik;
        protivnici_rast[i]=protivnik;
        protivnici_opad[n-1-i]=protivnik;
    }

    cin>>m;
    for(int i=0;i<m;i++){
        int takmicar;
        int br_partija;
        cin>>takmicar>>br_partija;
        auto pocetni=lower_bound(protivnici_rast.begin(),protivnici_rast.end(),takmicar);
        if(pocetni==protivnici_rast.end()){
            auto najmanji=protivnici_rast.end()-br_partija;
            cout<<najmanji-protivnici_rast.begin()<<'\n';
            continue;
        }
        auto temp=lower_bound(protivnici_opad.begin(),protivnici_opad.end(),takmicar,greater<int>());
        if(*pocetni-takmicar>=takmicar-*temp && temp!=protivnici_opad.end())pocetni=temp;

        auto najmanji=pocetni;
        auto granica_gore=pocetni;
        auto granica_dole=pocetni;
        auto sledeci_gore=upper_bound(protivnici_rast.begin(),protivnici_rast.end(),*granica_gore);
        auto sledeci_dole=upper_bound(protivnici_opad.begin(),protivnici_opad.end(),*granica_dole,greater<int>());
        if((*sledeci_gore-*pocetni<*pocetni-*sledeci_dole && granica_gore!=protivnici_rast.end() && sledeci_gore!=protivnici_rast.end()) || sledeci_dole==protivnici_opad.end()){
            granica_gore=sledeci_gore;
        }else{
            najmanji=sledeci_dole;
            granica_dole=sledeci_dole;
        }

        for(int k=0;k<br_partija-2;k++){
            sledeci_gore=upper_bound(protivnici_rast.begin(),protivnici_rast.end(),*granica_gore);
            sledeci_dole=upper_bound(protivnici_opad.begin(),protivnici_opad.end(),*granica_dole,greater<int>());
            if((*sledeci_gore-*pocetni<*pocetni-*sledeci_dole && granica_gore!=protivnici_rast.end() && sledeci_gore!=protivnici_rast.end()) || sledeci_dole==protivnici_opad.end()){
                granica_gore=sledeci_gore;
            }else{
                najmanji=sledeci_dole;
                granica_dole=sledeci_dole;
            }
        }
        cout<<(lower_bound(protivnici_rast.begin(),protivnici_rast.end(),*najmanji)-protivnici_rast.begin())<<'\n';
    }
}


/*

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>protivnici(n);
    for(int i=0;i<n;i++)cin>>protivnici[i];

    cin>>m;
    for(int i=0;i<m;i++){
        int takmicar;
        int br_partija;
        cin>>takmicar>>br_partija;
        auto prvi_veci_ili_jednak=lower_bound(protivnici.begin(),protivnici.end(),takmicar);
        if(prvi_veci_ili_jednak==protivnici.end()){
            auto najmanji=protivnici.end()-br_partija;
            cout<<najmanji-protivnici.begin()<<'\n';
            continue;
        }
        auto pocetni=prvi_veci_ili_jednak;
        if((*prvi_veci_ili_jednak-takmicar>=takmicar-*(prvi_veci_ili_jednak-1)) && (prvi_veci_ili_jednak-1!=protivnici.begin()-1)){
            pocetni=prvi_veci_ili_jednak-1;
        }
        auto najmanji=pocetni;
        int j=1;
        bool skipuj=false;
        for(int k=1;k<br_partija;k++){
            skipuj=false;
            if(pocetni-k==protivnici.begin() && (*(pocetni+j)-*pocetni>=*pocetni-*(pocetni-k))){
                cout<<0<<'\n';
                skipuj=true;
                break;
            }
            auto trenutni=pocetni-k;
            if((*(pocetni+j)-*pocetni<*pocetni-*trenutni) && (pocetni+j!=protivnici.begin())){
                trenutni=pocetni-j;
                j++;
            }
            if(*trenutni<*najmanji)najmanji=trenutni;
        }
        if(skipuj)continue;
        cout<<najmanji-protivnici.begin()<<'\n';
    }
}
*/
