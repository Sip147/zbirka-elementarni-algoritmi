#include <bits/stdc++.h>

using namespace std;

long long m,p,k;

long long gcd(long long a, long long b){
    if(a==0)return b;
    return gcd(b%a,a);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>m>>p>>k;

    cout<<gcd(m,gcd(p,k));
}
