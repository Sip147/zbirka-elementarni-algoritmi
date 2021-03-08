#include <bits/stdc++.h>

using namespace std;

int n,k;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n>>k;
    queue<int>deca;
    for(int i=0;i<n;i++){
        deca.push(i);
    }
    int j=1;
    while(deca.size()>1){
        int dete=deca.front();
        deca.pop();
        if(j!=k){
            deca.push(dete);
        }else{
            j=0;
        }
        j++;
    }
    cout<<deca.front();
}
