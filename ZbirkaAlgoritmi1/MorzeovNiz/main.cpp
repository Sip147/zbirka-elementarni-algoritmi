#include <bits/stdc++.h>

using namespace std;



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin>>n;
    int eksp=0;
    bool prvi=true;
    if(n==1){
        cout<<1;
        return 0;
    }

    while(pow(2,eksp)<n){
        eksp++;
    }
    eksp--;

    long long broj=pow(2,eksp);

    long long negacija_od=n-broj;

    int br=0;

    while(negacija_od>=1){
        br++;
        broj/=2;
        if(negacija_od==2){
            cout<<0;
            return 0;
        }
        negacija_od=negacija_od-broj;
    }
    if(br%2==0)cout<<1;
    else cout<<0;

}
