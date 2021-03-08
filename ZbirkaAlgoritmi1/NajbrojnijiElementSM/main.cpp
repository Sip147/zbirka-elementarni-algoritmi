#include <bits/stdc++.h>

using namespace std;



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,najvise_glasova=0;
    cin>>n;
    map<string,int>glasovi;
    for(int i=0;i<n;i++){
        string ucenik;
        cin>>ucenik;
        glasovi[ucenik]++;
        if(glasovi[ucenik]>najvise_glasova)najvise_glasova++;
    }
    cout<<najvise_glasova;
}
