#include <bits/stdc++.h>

using namespace std;

int br_t;

struct Takmicar{
    string opstina;
    string sifra;
};


vector<Takmicar>takmicari;
map<string,int>br_takm,poc_poz;
vector<string>rezultujuci;

void sortiraj(vector<Takmicar> &takmicari, map<string,int> &br_takm, map<string,int> &poc_poz, vector<string> &rezultujuci){
    int poc=0;
    for(auto it=br_takm.begin();it!=br_takm.end();it++){
        poc_poz[it->first]=poc;
        poc+=br_takm[it->first];
    }
    rezultujuci.resize(br_t);
    for(auto takm: takmicari){
        int pozicija=poc_poz[takm.opstina];
        rezultujuci[pozicija]=takm.sifra;
        poc_poz[takm.opstina]++;
    }

}

void unesi(vector<Takmicar> &takmicari, map<string,int> &br_takm){
    string s;
    while (getline(cin, s)) {
        int p = s.find('\t');
        string opstina = s.substr(0, p);
        string sifra = s.substr(p + 1);
        takmicari.push_back({opstina, sifra});
        br_takm[opstina]++;
        br_t++;
      }
}

void test(vector<Takmicar> takmicari, map<string,int> br_takm, map<string,int> poc_poz, vector<string> rezultujuci){
    for(int i=0;i<takmicari.size();i++){
        cout<<takmicari[i].opstina<<": "<<takmicari[i].sifra<<'\n';
    }
    cout<<endl;
    for(auto it=br_takm.begin();it!=br_takm.end();it++){
        cout<<it->first<<' '<<it->second<<'\n';
    }
    cout<<endl;
    for(auto it=poc_poz.begin();it!=poc_poz.end();it++){
        cout<<it->first<<':'<<it->second<<'\n';
    }
    cout<<endl;
    for(int i=0;i<rezultujuci.size();i++){
        cout<<rezultujuci[i]<<' ';
    }
}

void ispisi(map<string,int> br_takm, vector<string> rezultujuci){
    int j=0;
    for(auto it=br_takm.begin();it!=br_takm.end();it++){
        cout<<it->first<<": ";
        for(int i=0;i<it->second;i++){
            if(i+1<it->second){
                cout<<rezultujuci[j++]<<", ";
            }else{
                cout<<rezultujuci[j++];
            }
        }
        cout<<'\n';
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unesi(takmicari,br_takm);
    sortiraj(takmicari,br_takm,poc_poz,rezultujuci);
    //test(takmicari,br_takm,poc_poz,rezultujuci);
    ispisi(br_takm,rezultujuci);

}
