#include <bits/stdc++.h>

using namespace std;

int n,maks;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++){
        int visina;
        cin>>visina;
        if(visina>=maks){
            maks=visina;
        }else break;
    }
    cout<<maks;
}
