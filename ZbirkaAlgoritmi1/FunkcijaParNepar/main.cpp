#include <bits/stdc++.h>

using namespace std;

int par_nepar(int n){
    if(n==1){
        return 1;
    }
    if(n%2==0){
        return par_nepar(n/2);
    }else{
        return par_nepar((n-1)/2)+par_nepar(n+1);
    }

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    cout<<par_nepar(n);

}
