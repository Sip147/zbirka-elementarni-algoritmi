#include <bits/stdc++.h>

using namespace std;

int n,m;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<long long>muska(n);
    for(int i=0;i<n;i++)cin>>muska[i];

    cin>>m;
    vector<long long>zenska(m);
    for(int i=0;i<m;i++)cin>>zenska[i];

    sort(muska.begin(),muska.end());
    sort(zenska.begin(),zenska.end());

    int i=0,j=0;
    long long nr=numeric_limits<long long>::max();  //najmanja razlika
    while(i<n && j<m){
        long long m=muska[i],z=zenska[j];
        if(m<z){
            nr=min(nr,z-m);
            i++;
        }else{
            nr=min(nr,m-z);
            j++;
        }
    }
    while(i<n){
        nr=min(nr,abs(muska[i]-zenska[m-1]));
        i++;
    }
    while(j<m){
        nr=min(nr,abs(zenska[j]-muska[n-1]));
        j++;
    }
    cout<<nr;
}
