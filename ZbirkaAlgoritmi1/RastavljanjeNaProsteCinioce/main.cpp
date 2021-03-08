#include <bits/stdc++.h>

using namespace std;

unsigned n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;

    while(n%2==0){
        cout<<2<<" ";
        n/=2;
    }

    for(int d=3;d*d<=n;d+=2){
        while(n%d==0){
            cout<<d<<" ";
            n/=d;
        }
    }
    if(n>1)cout<<n;
}
