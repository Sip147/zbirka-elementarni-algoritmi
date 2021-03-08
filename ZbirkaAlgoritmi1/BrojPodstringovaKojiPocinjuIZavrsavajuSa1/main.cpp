#include <bits/stdc++.h>

using namespace std;

string s;
int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>s;
    if(s.length()<2){
        cout<<0;
        return 0;
    }
    for(char c: s){
        if(c=='1'){
            n++;
        }
    }
    cout<<(n*n-n)/2;

}
