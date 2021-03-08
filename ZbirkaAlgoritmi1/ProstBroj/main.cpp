#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;

    if(n==2 || n==3){
        cout<<"DA";
        return 0;
    }

    if(n==1 || n%2==0 || n%3==0){
        cout<<"NE";
        return 0;
    }

    for(int i=1;(6*i-1)*(6*i-1)<=n;i++){
        if(n%(6*i+1)==0 || n%(6*i-1)==0){
            cout<<"NE";
            return 0;
        }
    }
    cout<<"DA";

}
