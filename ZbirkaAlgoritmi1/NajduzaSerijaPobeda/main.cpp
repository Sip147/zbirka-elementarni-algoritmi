#include <bits/stdc++.h>

using namespace std;

int n,a,br,k;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>0){
            br++;
            k=max(br,k);
        }
        else{
         br=0;
        }
    }
    cout<<k;
}
