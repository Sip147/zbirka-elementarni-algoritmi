#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<pair<string,int>>imena(n);
    vector<pair<int,int>>bodovi(n);
    for(int i=0;i<n;i++){
        cin>>imena[i].first>>bodovi[i].first;
        imena[i].second=bodovi[i].first;
    }

    sort(bodovi.begin(),bodovi.end(),[](const pair<int,int> &A, const pair<int,int> &B){
                                                   return(A.first>B.first);});
    for(int i=0;i<n;i++){
        bodovi[i].second=i+1;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(imena[i].second==bodovi[j].first){
                cout<<imena[i].first<<' '<<bodovi[j].second<<'\n';
            }
        }
    }

}
