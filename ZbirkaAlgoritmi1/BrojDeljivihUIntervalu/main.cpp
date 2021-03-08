#include <bits/stdc++.h>

using namespace std;

int a,b,k,dodatak;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>a>>b>>k;

    if(a==0)dodatak=1;

    cout<<b/k-max(0,(a-1))/k+dodatak;

}
