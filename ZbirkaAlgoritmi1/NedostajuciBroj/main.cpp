#include <bits/stdc++.h>

using namespace std;

int n,a;
long long suma;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        suma+=a;
    }

    cout<<(long long)n*(n+1)/2-suma;

}
