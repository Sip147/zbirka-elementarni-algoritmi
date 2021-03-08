#include <bits/stdc++.h>

using namespace std;

int n,br;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>adrese(n);
    for(int i=0;i<n;i++){
        cin>>adrese[i];
    }

    sort(adrese.begin(),adrese.end());

    int broj=adrese[0];
    br++;
    for(int i=1;i<n;i++){
        if(adrese[i]!=broj){
            broj=adrese[i];
            br++;
        }
    }
    cout<<br;
}
