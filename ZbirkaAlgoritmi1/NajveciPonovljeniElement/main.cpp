#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    int maks=0;

    for(int i=n-1;i>=1;i--){
        if(a[i]==a[i-1]){
            maks=max(maks,a[i]);
            break;
        }
    }

    if(maks==0)cout<<"nema";
    else cout<<maks;

}
