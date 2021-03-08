#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    unsigned long long faktorijel=1;
    for(int i=1;i<=n;i++){
        faktorijel*=i;
        cout<<faktorijel<<endl;
    }
}
