#include <bits/stdc++.h>

using namespace std;

int n;
long long granica;

long long nadjiNajmanjuRazliku(const vector<int>& jacine, int n, int br_igraca){
    int najmanja_razlika=br_igraca*(jacine[n-1]-jacine[0]);
    for(int i=0;i<=n-br_igraca;i++){
        int razlika=br_igraca*(jacine[i+br_igraca-1]-jacine[i]);
        if(razlika<najmanja_razlika){
            najmanja_razlika=razlika;
        }
    }
    return najmanja_razlika;
}

pair<bool, long long> manjeIliJednakoGranici(const vector<int>& jacine, long long granica, int n, int br_igraca){
    long long razlika=nadjiNajmanjuRazliku(jacine,n,br_igraca);
    pair<bool, long long>rez=make_pair(razlika<=granica,razlika);
    return rez;
}

pair<int, long long> nadjiBrojIgraca(const vector<int>& jacine, long long granica, int n){
    int od_igraca=0;
    int do_igraca=n;
    int razlika=0;
    while(od_igraca<do_igraca){
        int br_igraca=od_igraca+ceil((do_igraca-od_igraca)/2.0);
        pair<bool, long long>rez=manjeIliJednakoGranici(jacine,granica,n,br_igraca);
        if(rez.first){
            od_igraca=br_igraca;
            razlika=rez.second;
        }
        else do_igraca=br_igraca-1;
    }
    return make_pair(od_igraca,razlika);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>jacine(n);
    for(int i=0;i<n;i++)cin>>jacine[i];
    sort(jacine.begin(),jacine.end());
    cin>>granica;

    //long long test=nadjiNajmanjuRazliku({5,6,18,18,20},5,3);
    //cout<<test;

    pair<int,long long>rez=nadjiBrojIgraca(jacine,granica,n);
    cout<<rez.first<<' '<<rez.second;

}
