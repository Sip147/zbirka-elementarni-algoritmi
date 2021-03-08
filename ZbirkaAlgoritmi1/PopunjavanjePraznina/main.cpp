#include <bits/stdc++.h>

using namespace std;

int n,k[50000],l_max[50000],d_max[50000],rez;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++)cin>>k[i];

    l_max[0]=k[0];
    for(int i=1;i<n;i++)l_max[i]=max(l_max[i-1],k[i]);

    d_max[n-1]=k[n-1];
    for(int i=n-2;i>=0;i--)d_max[i]=max(d_max[i+1],k[i]);

    for(int i=0;i<n;i++)rez+=min(l_max[i],d_max[i])-k[i];

    cout<<rez;

}
