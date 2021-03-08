#include <bits/stdc++.h>

using namespace std;

int n,tren,pret=numeric_limits<int>::max(),broj_uzastopnih,br;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>tren;
        if(tren>pret){
            broj_uzastopnih++;
            br+=broj_uzastopnih;
        }else broj_uzastopnih=0;
        pret=tren;
    }
    cout<<br;
}
