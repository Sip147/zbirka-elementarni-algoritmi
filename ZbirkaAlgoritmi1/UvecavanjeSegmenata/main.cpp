#include <bits/stdc++.h>

using namespace std;

int n,m;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    cin>>m;
    vector<int>razl(n+1,0);
    for(int i=0;i<m;i++){
        int km_od, km_do, masa;
        cin>>km_od>>km_do>>masa;
        razl[km_od]+=masa;
        razl[km_do+1]-=masa;
    }

    vector<int>M(n);
    M[0]=razl[0];
    for(int i=1;i<n;i++){
        M[i]=M[i-1]+razl[i];
    }

    for(int i=0;i<n;i++)cout<<M[i]<<' ';

}
