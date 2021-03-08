#include <bits/stdc++.h>

using namespace std;

int n,m;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n>>m;
    vector<vector<int>>blokovi(n);
    long long kablovi_desno=0, kablovi_levo=0, kablovi_iznad=0, kablovi_ispod=0;
    int stanari_desno=0, stanari_levo=0, stanari_iznad=0, stanari_ispod=0, ukupno, najmanje=numeric_limits<int>::max();
    for(int i=0;i<n;i++){
        vector<int>red(m);
        int st_desno=0;
        for(int j=0;j<m;j++){
            int a;
            cin>>a;
            red[j]=a;
            kablovi_desno+=a*j;
            stanari_desno+=a;
            st_desno+=a;
        }
        if(i>0)stanari_ispod+=st_desno;
        kablovi_ispod+=st_desno*i;

        stanari_desno-=red[0];
        blokovi[i]=red;
    }
    pair<int,int>pozicija=make_pair(0,0);
    ukupno=kablovi_desno+kablovi_levo+kablovi_iznad+kablovi_ispod;
    najmanje=min(najmanje,ukupno);

    int stanari_desno_pocetna=stanari_desno, kablovi_desno_pocetna=kablovi_desno;

    kablovi_desno-=stanari_desno;
    for(int i=0;i<n;i++){
        stanari_desno-=blokovi[i][1];
        stanari_levo+=blokovi[i][0];
    }
    kablovi_levo+=stanari_levo;

    ukupno=kablovi_desno+kablovi_levo+kablovi_iznad+kablovi_ispod;
    if(ukupno<najmanje){
        najmanje=ukupno;
        pozicija.second=1;
        pozicija.first=0;
    }

    for(int i=0;i<n;i++){
        int i_old=n;
        int pocetak=0;
        if(i<1)pocetak=2;
        for(int j=pocetak;j<m;j++){
            if(kablovi_desno>0)kablovi_desno-=stanari_desno;
            for(int k=0;k<n;k++){
                if(j>0){
                    stanari_levo+=blokovi[i][j-1];
                    stanari_desno-=blokovi[i][j];
                }else{
                    stanari_levo=0;
                    stanari_desno=stanari_desno_pocetna;
                    kablovi_desno=kablovi_desno_pocetna;
                    kablovi_levo=0;
                    break;
                }
            }
            kablovi_levo+=stanari_levo;
            if(i>0){
                if(i_old!=i){
                    if(kablovi_ispod>0)kablovi_ispod-=stanari_ispod;
                    for(int k=0;k<m;k++){
                        stanari_ispod-=blokovi[i][k];
                        stanari_iznad+=blokovi[i-1][k];
                    }
                    kablovi_iznad+=stanari_iznad;
                    i_old=i;
                }
            }
            ukupno=kablovi_desno+kablovi_levo+kablovi_iznad+kablovi_ispod;
            if(ukupno<najmanje){
                najmanje=ukupno;
                pozicija.second=j;
                pozicija.first=i;
            }
        }
    }
    cout<<pozicija.first<<'\n'<<pozicija.second;
}
