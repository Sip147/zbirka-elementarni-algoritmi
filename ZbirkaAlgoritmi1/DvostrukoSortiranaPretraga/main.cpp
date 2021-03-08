#include <bits/stdc++.h>

using namespace std;

int m,n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>m>>n;
    map<int,int>ponavljanja;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            ponavljanja[a]++;
        }
    }
    int broj;
    while(cin>>broj){
        cout<<ponavljanja[broj]<<'\n';
    }
}
