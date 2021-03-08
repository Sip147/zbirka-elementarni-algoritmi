#include <bits/stdc++.h>

#define granica 1000000000

using namespace std;

long double n,k;
long double kolona,red;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n>>k;

    kolona=n*n*k+(n*n-n)/2;

    red=n*k+(n*n*n-n*n)/2;

    long double kol=fmod(kolona,granica);
    long double re=fmod(red,granica);

    if(kolona>granica){
        while(kol+1<=granica/10){
            cout<<0;
            kol*=10;
        }
        kolona=fmod(kolona,granica);
    }

    cout<<fixed<<setprecision(0)<<kolona<<"\n";



    if(red>granica){
        while(re+1<=granica/10){
            cout<<0;
            re*=10;
        }
        red=fmod(red,granica);
    }
    cout<<fixed<<setprecision(0)<<red<<"\n";

}
