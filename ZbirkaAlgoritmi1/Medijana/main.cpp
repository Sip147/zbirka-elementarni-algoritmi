#include <bits/stdc++.h>

using namespace std;

int n;
unsigned c0,c1,a0;
double medijana;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n>>c0>>c1>>a0;
    vector<unsigned>a(n);
    a[0]=a0;
    for(int i=1;i<n;i++){
        a[i] = c0 * a[i-1] + c1;
    }

    if(fmod(n,2)==0){
        medijana=(a[n/2]+a[n/2-1])/2.0;
    }else{
        medijana=a[n/2];
    }
    cout<<fixed<<setprecision(2)<<medijana;
}
