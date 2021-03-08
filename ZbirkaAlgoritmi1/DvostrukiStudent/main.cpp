#include <bits/stdc++.h>

using namespace std;

string student;
vector<string>studenti;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(getline(cin,student)){
        studenti.push_back(student);
    }

    sort(studenti.begin(),studenti.end());

    for(auto it=studenti.end()-1;it!=studenti.begin();it--){
        if(*it==*(it-1)){
            cout<<*it;
            break;
        }


    }

}
