#include <bits/stdc++.h>

using namespace std;

long long n,b[32];

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;

    int i=31;
    while(n>0){
        b[i]=n%2;
        n/=2;
        i--;
    }
    for(int i=0;i<32;i++)cout<<b[i];
}
