#include <bits/stdc++.h>

using namespace std;

string s;
int k;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>s>>k;
    int n=s.length();
    map<char,int>ponavljanja;
    for(int i=0;i<k;i++)ponavljanja[s[i]]++;

    if(ponavljanja.size()==26){
        cout<<"da";
        return 0;
    }

    for(int i=k;i<n;i++){
        ponavljanja[s[i]]++;
        ponavljanja[s[i-k]]--;
        if(ponavljanja[s[i-k]]==0){
            ponavljanja.erase(s[i-k]);
        }else if(ponavljanja.size()==26){
            cout<<"da";
            return 0;
        }
    }
    cout<<"ne";
}
