#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<long long>citati(n);
    for(int i=0;i<n;i++)cin>>citati[i];

    sort(citati.begin(),citati.end(),greater<long long>());

    long long rez=0;
    for(int i=0;i<n;i++){
        if(citati[i]>=i+1){
            rez=max(rez,(long long)i+1);
        }
    }
    cout<<rez;
}
