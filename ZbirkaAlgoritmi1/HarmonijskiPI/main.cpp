#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
    iostream::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    double pi=0;
    vector<double>vrednosti(n);
    for(int k=0;k<n;k++){
        pi+=(pow(-1,k)/(2*k+1));
        vrednosti[k]=pi*4;
    }
    cout<<fixed<<setprecision(5)<<pi*4<<'\n';
    for(int i=0;i<n;i++)cout<<vrednosti[i]<<'\n';

}
