#include <bits/stdc++.h>

using namespace std;

struct Predmet{
    string sifra;
    double cena;
};

bool uporedi(const Predmet &A, const Predmet &B){
    if(A.cena>B.cena)return true;
    if(A.cena<B.cena)return false;
    if(A.sifra<=B.sifra)return true;
}

int n;
double novac,c;
string s;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>novac>>n;
    vector<Predmet>inventar(n);
    for(int i=0;i<n;i++){
        cin>>s>>c;
        inventar[i].sifra=s;
        inventar[i].cena=c;
    }

    sort(inventar.begin(),inventar.end(),uporedi);

    for(int i=0;i<n;i++){
        if(novac-inventar[i].cena >= 0){
            novac-=inventar[i].cena;
            cout<<inventar[i].sifra<<' '<<fixed<<setprecision(2)<<inventar[i].cena<<'\n';
        }
    }
    if(novac>0)cout<<fixed<<setprecision(2)<<novac;
}
