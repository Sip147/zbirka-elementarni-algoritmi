#include <bits/stdc++.h>

using namespace std;

int n,maks,br;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>intervali(500);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        for(int j=a;j<b;j++){
            intervali[j]++;
        }
    }

    for(int i=0;i<intervali.size();i++){
        br=intervali[i];
        maks=max(br,maks);
    }
    cout<<maks;
}
