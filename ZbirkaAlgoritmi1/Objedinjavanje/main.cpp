#include <bits/stdc++.h>

using namespace std;

int n,m;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++)cin>>b[i];

    for(int i=0, j=0;i<n || j<m;){
        if((a[i]<b[j] && i<n) || !(j<m)){
            cout<<a[i++]<<' ';
        }else if(j<m)cout<<b[j++]<<' ';
    }
}
