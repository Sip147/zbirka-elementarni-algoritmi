#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    map<int,int>mesta;
    for(int i=0;i<n;i++){
        int mesto;
        cin>>mesto;
        mesta[mesto]++;
    }

    for(auto it=mesta.begin();it!=mesta.end();it++){
        if(it->second==1){
            cout<<it->first;
            break;
        }
    }

}
