#include <bits/stdc++.h>

using namespace std;

int n,k;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>k>>n;
    vector<double>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    double zbir=0;
    int pozicija=0;
    for(int i=0;i<k;i++)zbir+=a[i];

    double maks=zbir;

    for(int i=k;i<n;i++){
        zbir+=a[i];
        zbir-=a[i-k];
        if(zbir>=maks){
            maks=zbir;
            pozicija=i-k+1;
        }
    }
    cout<<pozicija;
}
