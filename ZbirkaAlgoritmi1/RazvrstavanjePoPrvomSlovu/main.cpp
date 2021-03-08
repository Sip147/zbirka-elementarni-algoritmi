#include <bits/stdc++.h>

using namespace std;

string ime,prezime;
vector<pair<string,string>>inicijali;

bool uporedi(const pair<string,string> &A, const pair<string,string> &B){
    if(A.first[0]!=B.first[0])return (A.first[0]<B.first[0]);
    return (A.second[0]<B.second[0]);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    while(cin>>ime){
        cin>>prezime;
        inicijali.push_back(make_pair(ime,prezime));
    }
    stable_sort(inicijali.begin(),inicijali.end(),uporedi);



    for(int i=0;i<inicijali.size();i++)cout<<inicijali[i].first<<' '<<inicijali[i].second<<'\n';

}
