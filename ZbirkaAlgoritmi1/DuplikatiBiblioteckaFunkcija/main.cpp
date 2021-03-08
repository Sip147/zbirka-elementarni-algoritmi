#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>adrese(n);
    for(int i=0;i<n;i++){
        cin>>adrese[i];
    }

    sort(adrese.begin(),adrese.end());

    auto it_na_prvi_elem_koji_se_ponavlja=unique(adrese.begin(),adrese.end());

    adrese.erase(it_na_prvi_elem_koji_se_ponavlja, adrese.end());

    cout<<adrese.size();
}
