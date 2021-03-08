#include <bits/stdc++.h>

using namespace std;

int n;
double z;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>z>>n;
    vector<double>niz(n);
    for(int i=0;i<n;i++)cin>>niz[i];

    int d=0,l=0;
    double zbir=niz[l];
    if(zbir==z){
        cout<<l<<' '<<d<<'\n';
        d++;
        l++;
    }
    while(d<n){
        if(zbir<z){
            d++;
            zbir+=niz[d];
        }else if(zbir>z){
            zbir-=niz[l];
            l++;
        }else{
            cout<<l<<' '<<d<<'\n';
            zbir-=niz[l++];
            zbir+=niz[++d];
        }

    }
    cout<<'\n';
}
