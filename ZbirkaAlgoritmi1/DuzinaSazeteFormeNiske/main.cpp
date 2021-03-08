#include <bits/stdc++.h>

using namespace std;



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin>>s;

    double duz=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>57)duz+=1;
        else{
            duz=duz*(s[i]-48);
        }
    }
    cout<<setprecision(0)<<fixed<<duz;
}
