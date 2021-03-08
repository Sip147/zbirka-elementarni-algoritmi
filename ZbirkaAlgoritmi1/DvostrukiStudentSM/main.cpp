#include <bits/stdc++.h>

using namespace std;

string s;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<string>studenti;
    while(getline(cin,s)){
        if(!studenti.insert(s).second){
            cout<<s;
        }
    }

}
