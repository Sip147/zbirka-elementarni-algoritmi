#include <bits/stdc++.h>

using namespace std;

int n,br,maks;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<string>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());

    br++;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            br++;
            maks=max(br,maks);
        }else br=1;
    }
    cout<<maks;
}
