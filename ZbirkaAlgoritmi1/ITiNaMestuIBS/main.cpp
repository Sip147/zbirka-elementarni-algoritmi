#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    bool ispisi=true;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==i && ispisi){
            cout<<i;
            ispisi=false;
        }
    }
    if(ispisi)cout<<"nema";
}
