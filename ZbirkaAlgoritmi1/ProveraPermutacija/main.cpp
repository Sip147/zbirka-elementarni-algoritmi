#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>n;
    vector<int>b(n);
    for(int i=0;i<n;i++)cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    if(a==b)cout<<"da";
    else cout<<"ne";

}
