#include <bits/stdc++.h>

using namespace std;

int n,maks;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    int zbir=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        zbir+=a;
        maks=max(zbir,maks);
    }
    cout<<maks;
}
