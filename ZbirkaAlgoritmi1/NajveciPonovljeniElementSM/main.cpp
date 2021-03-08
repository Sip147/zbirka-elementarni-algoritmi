#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    map<int,int>ponavljanja;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ponavljanja[x]++;
    }
    for(auto it=ponavljanja.rbegin();it!=ponavljanja.rend();it++){
        if(it->second>1){
            cout<<it->first;
            return 0;
        }
    }
    cout<<"nema";
}
