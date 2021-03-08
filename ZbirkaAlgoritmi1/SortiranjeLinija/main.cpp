#include <bits/stdc++.h>

using namespace std;

string s;
vector<string>reci;

bool uporedi(string A, string B){
    transform(A.begin(),A.end(),A.begin(),::tolower);
    transform(B.begin(),B.end(),B.begin(),::tolower);
    if(A<B)return true;
    if(A>=B)return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(cin>>s){
        //transform(s.begin(),s.end(),s.begin(),::tolower);
        reci.push_back(s);
    }
    sort(reci.begin(),reci.end(),uporedi);
    for(auto it=reci.begin();it!=reci.end();it++)cout<<*it<<'\n';
}
