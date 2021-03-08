#include <bits/stdc++.h>

using namespace std;

int n,s,br;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>s>>n;
    vector<int>niz(n);
    for(int i=0;i<n;i++)cin>>niz[i];

    sort(niz.begin(),niz.end());

    int l=0,d=n-1;

    while(l<d){
        if(niz[l]+niz[d]<s)l++;
        else if(niz[l]+niz[d]>s)d--;
        else{
            br++;
            l++;
            d--;
        }
    }
    cout<<br;
}
