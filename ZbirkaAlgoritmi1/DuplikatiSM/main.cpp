#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    set<int>adrese;
    for(int i=0;i<n;i++){
        int adresa;
        cin>>adresa;
        adrese.insert(adresa);
    }
    cout<<adrese.size();
}
