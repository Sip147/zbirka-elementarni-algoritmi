#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i+=2){
        cout<<a[i]<<'\n';
    }
    int pocetna;
    if(n%2==0){
        pocetna=n-1;
    }else pocetna=n-2;
    for(int i=pocetna;i>0;i-=2){
        cout<<a[i]<<'\n';
    }

}
