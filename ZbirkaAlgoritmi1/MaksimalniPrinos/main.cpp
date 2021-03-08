#include <bits/stdc++.h>

using namespace std;

long long a,b,c;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>a>>b>>c;

    long long manji=min(a,b);
    long long veci=max(a,b);

    manji+=c;

    if(manji>veci+1){
        long long old=manji;
        manji-=ceil((old-veci)/2.0);
        veci+=ceil((old-veci)/2.0);
    }

    cout<<manji*veci;

}
