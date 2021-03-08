#include <bits/stdc++.h>

using namespace std;

int n,k,index;
double maks=numeric_limits<double>::min();

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>k>>n;
    queue<double>red;
    double zbir=0;
    for(int i=0;i<n;i++){
        double a;
        cin>>a;
        red.push(a);
        zbir+=a;
        if(red.size()>k){
            zbir-=red.front();
            red.pop();
        }
        if(red.size()==k){
            if(zbir>=maks){
                maks=zbir;
                index=i-k+1;
            }

        }
    }
    cout<<index;
}
