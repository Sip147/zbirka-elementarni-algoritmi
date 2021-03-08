#include <bits/stdc++.h>

using namespace std;

int z,n,segmenti;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>z>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    for(int i=0;i<n;i++){
        int zbir=0;
        for(int j=i;j<n;j++){
            zbir+=a[j];
            if(zbir==z)segmenti++;
        }
    }
    cout<<segmenti;
}
