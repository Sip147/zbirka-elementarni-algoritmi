#include <bits/stdc++.h>

using namespace std;

long long k,j=1,pocetni=1,rez;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>k;

    for(long long i=0;i<k-1;i++){
        pocetni+=j;
        j+=2;

    }
    for(long long i=pocetni;i<pocetni+j;i++){
        rez+=i;
    }
    cout<<rez;

}
