#include <bits/stdc++.h>

using namespace std;

int n;

long long gcd(const long long& a, const long long& b){
    if(a==0)return b;
    return gcd(b%a, a);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<long long>niz(n);
    long long najmanji=numeric_limits<long long>::max();
    int najmanji_index=0;
    for(int i=0;i<n;i++){
        cin>>niz[i];
        if(niz[i]<najmanji){
            najmanji=niz[i];
            najmanji_index=i;
        }
    }

    vector<long long>nzd(n);
    nzd[0]=niz[0];
    int poz_zamene=najmanji_index;
    for(int i=1;i<n;i++){
        nzd[i]=gcd(nzd[i-1],niz[i]);
        if(nzd[i]<nzd[i-1]){
            poz_zamene=i;
        }
    }

    if(poz_zamene>0)niz[poz_zamene]=niz[poz_zamene-1];
    else niz[poz_zamene]=niz[poz_zamene+1];

    nzd[0]=niz[0];
    for(int i=1;i<n;i++){
        nzd[i]=gcd(nzd[i-1],niz[i]);
    }
    cout<<nzd[n-1];


}





