#include <bits/stdc++.h>

using namespace std;

int p,k,n,a,br;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>p>>k>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>=p)br++;
        else br=0;
        if(br>=k){
            cout<<"da";
            return 0;
        }
    }
    cout<<"ne";
}
