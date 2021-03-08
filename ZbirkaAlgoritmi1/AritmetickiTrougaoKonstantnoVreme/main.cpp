#include <bits/stdc++.h>

using namespace std;

long long n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;

    long long rez=2*n*n*n-3*n*n+3*n-1;

    cout<<fixed<<setprecision(0)<<rez;

}
