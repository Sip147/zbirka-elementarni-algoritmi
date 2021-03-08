#include <bits/stdc++.h>

using namespace std;

double z;
int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>z>>n;
    vector<double>niz(n);
    cin>>niz[0];
    double a;
    for(int i=1;i<n;i++){
        cin>>a;
        niz[i]=niz[i-1]+a;
    }

    for(int i=0;i<n;i++){
        if(niz[i]<z)continue;
        else if(niz[i]==z){
            cout<<0<<' '<<i<<'\n';
            continue;
        }
        double trazeni=niz[i]-z;
        auto prvi_it=lower_bound(niz.begin(),niz.end(),trazeni);
        if(*prvi_it==trazeni){
            cout<<prvi_it-niz.begin()+1<<' '<<i<<'\n';
        }
    }

}
