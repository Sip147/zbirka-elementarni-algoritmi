#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>zgrade(n);
    long long zbir_desno=0, zbir_levo=0, ukupno=0, najkraci;
    int stanari_desno=0, stanari_levo=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        zgrade[i]=a;
        stanari_desno+=a;
        zbir_desno+=a*i;
    }
    stanari_desno-=zgrade[0];
    najkraci=zbir_desno;
    stanari_levo+=zgrade[0];
    zbir_levo+=stanari_levo;
    zbir_desno-=stanari_desno;
    stanari_desno-=zgrade[1];
    ukupno=zbir_desno+zbir_levo;
    najkraci=min(najkraci,ukupno);


    for(int i=2;i<n;i++){
        stanari_levo+=zgrade[i-1];
        zbir_levo+=stanari_levo;
        zbir_desno-=stanari_desno;
        stanari_desno-=zgrade[i];
        ukupno=zbir_desno+zbir_levo;
        najkraci=min(najkraci,ukupno);
    }
    cout<<najkraci;


}
