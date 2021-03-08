#include <bits/stdc++.h>

using namespace std;

int n,m;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>k(n);
    for(int i=0;i<n;i++)cin>>k[i];
    cin>>m;

    vector<int>l_min(m+1);
    l_min[0]=k[0];
    for(int i=1;i<m+1;i++)l_min[i]=min(l_min[i-1],k[i]);

    vector<int>d_max(m+1);
    d_max[m]=k[n-1];
    for(int i=m-1, j=1 ;i>=0;i--, j++)d_max[i]=max(d_max[i+1], k[n-1-j]);

    int rez=numeric_limits<int>::min();

    for(int i=0;i<m+1;i++)rez=max(rez,d_max[i]-l_min[i]);

    cout<<rez;




}
