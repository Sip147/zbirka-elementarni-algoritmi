#include <bits/stdc++.h>

using namespace std;

int n,broj;

int brojPodsegmenata(int duzina) {
    return duzina * (duzina - 1) / 2;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    unordered_set<int>s;

    int kraj=0,pocetak=0;

    while(true){
        while(kraj<n && s.find(a[kraj])==s.end()){
            s.insert(a[kraj]);
            kraj++;
        }

        int duzina = kraj - pocetak;
        broj += brojPodsegmenata(duzina);

        if(kraj>=n){
            break;
        }

        while(a[pocetak]!=a[kraj]){
            s.erase(a[pocetak]);
            pocetak++;
        }
        s.erase(a[pocetak]);
        pocetak++;

        duzina = kraj - pocetak;
        broj -= brojPodsegmenata(duzina);

    }
    cout<<broj;
}
