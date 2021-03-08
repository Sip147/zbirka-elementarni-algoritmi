#include <bits/stdc++.h>

using namespace std;

int n,m;

struct Djak{
    int ukupno;
    vector<int> ocene;
};

bool uporedi(const Djak &A, const Djak &B){
    return A.ukupno>B.ukupno;

}

void sortiraj(vector<Djak> &deca){
    stable_sort(deca.begin(),deca.end(),uporedi);
}

vector<Djak> upis(){
    cin>>n>>m;
    int ocena;
    vector<Djak>deca(n);
    for(int i=0;i<n;i++){
        deca[i].ocene.resize(m);
        int suma=0;
        for(int j=0;j<m;j++){
            cin>>ocena;
            suma+=ocena;
            deca[i].ocene[j]=ocena;
        }
        deca[i].ukupno=suma;
    }
    return deca;
}

void ispis(vector<Djak> deca){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<deca[i].ocene[j]<<' ';
        }
        cout<<'\n';
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<Djak>deca=upis();
    sortiraj(deca);
    ispis(deca);

}
