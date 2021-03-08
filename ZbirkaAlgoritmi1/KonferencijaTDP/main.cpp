#include <bits/stdc++.h>

using namespace std;

int m,n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>m>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    vector<int>ponavljanja(m+1,0);

    int zbir_kompanija=0;

    int l=0,d=0;

    int min_konf=n;

    bool moze=false;

    while(d<n){
        ponavljanja[a[d]]++;
        if(ponavljanja[a[d]]==1){
            zbir_kompanija++;
        }else if(ponavljanja[a[d]]==0){
            zbir_kompanija--;
        }
        if(zbir_kompanija==m){
            min_konf=min(d-l+1,min_konf);
            moze=true;
        }
        while(l<=d && ponavljanja[a[l]]>1){
            ponavljanja[a[l]]--;
            l++;
        }
        if(zbir_kompanija==m){
            min_konf=min(d-l+1,min_konf);
            moze=true;
        }
        d++;
    }
    moze ? cout<<min_konf : cout<<"ne moze";
}
