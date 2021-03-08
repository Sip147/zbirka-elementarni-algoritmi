#include <bits/stdc++.h>

using namespace std;

int n,k,dodatak;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n>>k;

    if(n%k!=0)dodatak=1;
    cout<<(n/k)*k<<'\n'<<(n/k+dodatak)*k;

}
