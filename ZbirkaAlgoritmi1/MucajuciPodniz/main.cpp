#include <bits/stdc++.h>

using namespace std;

string slova,rec;

bool mozeN(const string& slova, const string& rec, int n){
    int j=0;
    int br_pon_trazenog_slova=0;
    for(int i=0;i<rec.length();i++){
        if(rec[i]==slova[j]){
            br_pon_trazenog_slova++;
            if(br_pon_trazenog_slova==n){
                br_pon_trazenog_slova=0;
                j++;
            }
        }
        if(j>=slova.length())return true;
    }
    return false;
}

int najveciBrojN(const string& slova, const string& rec){
    int od_n=0;
    int do_n=ceil(rec.length()/slova.length());
    do{
        int n=od_n+ceil((do_n-od_n)/2.0);
        if(mozeN(slova,rec,n))od_n=n;
        else do_n=n-1;
    }while(od_n<do_n);
    return od_n;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>slova>>rec;

    //cout<<mozeN("xyz","xaxxybyxyxzyzzb",1);
    cout<<najveciBrojN(slova,rec);

}
