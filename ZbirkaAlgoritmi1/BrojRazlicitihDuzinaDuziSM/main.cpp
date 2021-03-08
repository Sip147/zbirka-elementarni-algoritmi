#include <bits/stdc++.h>

using namespace std;

int n;

double duzina_duzi(long long x1, long long y1, long long z1, long long x2, long long y2, long long z2){
    double udaljenost=sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
    return udaljenost;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    set<double>duzine;
    for(int i=0;i<n;i++){
        long long x1,y1,z1,x2,y2,z2;
        cin>>x1>>y1>>z1>>x2>>y2>>z2;
        duzine.insert(duzina_duzi(x1,y1,z1,x2,y2,z2));
    }
    cout<<duzine.size();
}
