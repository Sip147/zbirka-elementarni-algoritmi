#include <bits/stdc++.h>

using namespace std;

string a,b;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    getline(cin,a);
    getline(cin,b);
    for(int i=0;i<a.length();i++){
        char c=a[i];
        if((int)c<97){
            a.erase(remove(a.begin(),a.end(),c),a.end());
            i--;
        }
    }
    for(int i=0;i<b.length();i++){
        char c=b[i];
        if((int)c<97){
            b.erase(remove(b.begin(),b.end(),c),b.end());
            i--;
        }
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a.compare(b)==0){
        cout<<"da";
    }else cout<<"ne";
}
