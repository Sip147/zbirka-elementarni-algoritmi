#include <bits/stdc++.h>

using namespace std;

int n,m;

bool sveKompanije(const vector<int> &predavanja, int br_pred, int m){
    for(int i=0;i<=n-br_pred;i++){
        bool posetio_sve=true;
        auto pocetak=predavanja.begin()+i;
        auto kraj=pocetak+br_pred;
        for(int j=1;j<=m;j++){
            posetio_sve=posetio_sve && (kraj != find(pocetak,kraj,j));
            if(!posetio_sve)break;
        }
        if(posetio_sve){
            return true;
        }
    }
    return false;
}

int najmanjePredavanja(const vector<int> &predavanja, int n, int m){
    int od_pred=m;
    int do_pred=n;
    int ima_rez=false;
    while(od_pred<do_pred){
        int br_pred=od_pred+(do_pred-od_pred)/2;
        if(sveKompanije(predavanja,br_pred,m)){
            ima_rez=true;
            do_pred=br_pred;
        }else od_pred=br_pred+1;
    }
    if(ima_rez || n==m)return do_pred;
    return -1;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>m>>n;
    vector<int>predavanja(n);
    for(int i=0;i<n;i++)cin>>predavanja[i];

    //cout<<sveKompanije({1,1,1,1},2,2);
    int rez=najmanjePredavanja(predavanja,n,m);
    if(rez!=-1)cout<<rez;
    else cout<<"ne moze";

}
