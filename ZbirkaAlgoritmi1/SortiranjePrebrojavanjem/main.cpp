#include <bits/stdc++.h>

using namespace std;

int n,m;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>m>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];

    }

    vector<int>frekvencije(m,0);
    for(int i=0;i<n;i++){
        frekvencije[a[i]]++;
    }

    int k=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<frekvencije[i];j++){
            a[k++]=i;
        }
    }
    for (int i=0;i<n;i++)cout<<a[i]<<'\n';


}
