#include <bits/stdc++.h>

using namespace std;



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,s;
    cin>>s;
    cin>>n;
    map<int,int>broj;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        broj[x]++;
    }
    int br_parova=0;
    for(auto it=broj.begin();it!=broj.end();it++){
        while(it->second-->0){
            if(broj[s-it->first]>0){
                broj[s-it->first]--;
                br_parova++;
            }
        }
    }
    cout<<br_parova;
}
