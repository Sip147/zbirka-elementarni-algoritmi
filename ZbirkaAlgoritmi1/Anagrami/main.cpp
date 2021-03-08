#include <bits/stdc++.h>

using namespace std;

int n,br,maks;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        sort(a.begin(),a.end());
        s[i]=a;
    }
    sort(s.begin(),s.end());

    br++;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            br++;
            maks=max(br,maks);
        }else br=1;
    }
    cout<<maks;
}
