#include <bits/stdc++.h>

using namespace std;

string rec,karakteri;

bool imaSvaSlova(const string &rec, const string &karakteri, int br_slova){
    map<char,int>ponavljanja;
    for(int i=0;i<rec.length();i++){
        bool postoji_karakter=binary_search(karakteri.begin(),karakteri.end(),rec[i]);
        if(postoji_karakter)ponavljanja[rec[i]]++;
        if(i>=br_slova){
            char slovo=rec[i-br_slova];
            if(binary_search(karakteri.begin(),karakteri.end(),slovo)){
                if(--ponavljanja[rec[i-br_slova]]==0)ponavljanja.erase(rec[i-br_slova]);
            }
        }
        if(ponavljanja.size()==karakteri.length())return true;
    }
    return false;
}

int najkracaPodniska(const string &rec, const string &karakteri){
    int od_slova=0;
    int do_slova=rec.length();
    bool ima_rez=false;
    while(od_slova<do_slova){
        int br_slova=od_slova+(do_slova-od_slova)/2;
        if(imaSvaSlova(rec,karakteri,br_slova)){
            do_slova=br_slova;
            ima_rez=true;
        }
        else od_slova=br_slova+1;
    }
    if(ima_rez)return do_slova;
    return -1;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>rec>>karakteri;

    sort(karakteri.begin(),karakteri.end());

    //cout<<imaSvaSlova("aahhffah","afh",3);
    int rez=najkracaPodniska(rec,karakteri);
    if(rez==-1)cout<<"nema";
    else cout<<rez;

}
