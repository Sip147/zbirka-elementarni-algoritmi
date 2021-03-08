#include <bits/stdc++.h>

using namespace std;

int n;

bool imaKvadrat(const vector<int>& stupci, int duzina, int n){
    int stupci_visi_ili_jednaki_od_duzina_za_redom=0;
    for(int i=0;i<n;i++){
        if(stupci[i]>=duzina){
            stupci_visi_ili_jednaki_od_duzina_za_redom++;
            if(stupci_visi_ili_jednaki_od_duzina_za_redom>=duzina)return true;
        }else stupci_visi_ili_jednaki_od_duzina_za_redom=0;
    }
    return false;
}

int najveciKvadrat(const vector<int>& stupci, int n){
    int od_duzina=0;
    int do_duzina=n;
    while(od_duzina<do_duzina){
        int duzina=od_duzina+ceil((do_duzina-od_duzina)/2.0);
        if(imaKvadrat(stupci,duzina,n))od_duzina=duzina;
        else do_duzina=duzina-1;
    }
    return od_duzina;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>stupci(n);
    for(int i=0;i<n;i++)cin>>stupci[i];

    //cout<<imaKvadrat({1,5,4,4,2},3,5);
    int rez=najveciKvadrat(stupci,n);
    cout<<rez*rez;


}
