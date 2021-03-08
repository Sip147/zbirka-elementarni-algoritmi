#include <bits/stdc++.h>

using namespace std;

int n,m,z;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    cin>>m;
    vector<long long>b(m);
    for(int i=0;i<m;i++)cin>>b[i];

    cin>>z;
    vector<long long>c(z);
    for(int i=0;i<z;i++)cin>>c[i];

    int i=0,j=0,k=0;

    while(i<n && j<m && k<z){
        long long el=a[i];
        if(b[j]<a[i]){
            j++;
        }
        if(c[k]<a[i]){
            k++;
        }

        if(a[i]==b[j] && a[i]==c[k]){
            cout<<a[i++]<<' ';
        }else if(a[i]<b[j] || a[i]<c[k]){
            i++;
        }
    }
    cout<<endl;
}
