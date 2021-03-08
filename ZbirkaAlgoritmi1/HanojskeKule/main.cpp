#include <bits/stdc++.h>

using namespace std;



void resi(int n,int sa, int pom, int na){
    if(n>0){
        resi(n-1,sa,na,pom);
        cout<<sa<<' '<<na<<'\n';
        resi(n-1,pom,sa,na);
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    resi(n,1,2,3);


}
