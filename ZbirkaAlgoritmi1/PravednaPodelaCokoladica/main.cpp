#include <bits/stdc++.h>

using namespace std;

int n,k,razl,mini=numeric_limits<int>::max();

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>k;
    sort(a.begin(),a.end());
    for(int i=k-1;i<n;i++){
        razl=a[i]-a[i-(k-1)];
        mini=min(razl,mini);
    }
    cout<<mini;
}
