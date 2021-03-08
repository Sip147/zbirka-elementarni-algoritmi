#include <bits/stdc++.h>

using namespace std;

int n,bodovi;
string ime;

struct Takmicar{
    int bodovi;
    string ime;
};

bool uporedi(const Takmicar &A,const Takmicar &B){
    if(A.bodovi>B.bodovi){
        return true;
    }
    if (A.bodovi<B.bodovi){
        return false;
    }
    if(A.ime<=B.ime){
        return true;
    }
    return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<Takmicar>takmicari(n);
    for(int i=0;i<n;i++){
        cin>>takmicari[i].ime>>takmicari[i].bodovi;
    }

    sort(takmicari.begin(),takmicari.end(),uporedi);

    for(int i=0;i<n;i++)cout<<takmicari[i].ime<<' '<<takmicari[i].bodovi<<'\n';

}
