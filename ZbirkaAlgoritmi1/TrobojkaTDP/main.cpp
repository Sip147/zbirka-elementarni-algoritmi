#include <bits/stdc++.h>

using namespace std;

int n,a,b;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>niz(n);
    for(int i=0;i<n;i++)cin>>niz[i];
    cin>>a>>b;

    int l=0, d=n,i=0;
    while(i<d){
        if(niz[i]<a){
            swap(niz[i++],niz[l++]);
        }else if(niz[i]<=b){
            i++;
        }else{
            swap(niz[i],niz[--d]);
        }
    }
    for(int i=0;i<l;i++){
        cout<<niz[i]<<' ';
    }
    cout<<'\n';
    for(int i=l;i<d;i++){
        cout<<niz[i]<<' ';
    }
    cout<<'\n';
    for(int i=d;i<n;i++){
        cout<<niz[i]<<' ';
    }
    cout<<'\n';
}
