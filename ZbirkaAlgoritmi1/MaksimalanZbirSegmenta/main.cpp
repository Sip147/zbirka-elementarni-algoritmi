#include <bits/stdc++.h>

using namespace std;

int n,a,zb,zbmax;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        zb+=a;
        if(zb<0)zb=0;
        zbmax=max(zbmax,zb);
    }
    cout<<zbmax;
}
