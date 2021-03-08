#include <bits/stdc++.h>

using namespace std;

int n,br;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    int a,old_a=numeric_limits<int>::max();
    int za_redom=1;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>old_a){
            za_redom++;
            if(i==n-1){
                br+=(za_redom*(za_redom-1))/2;
                za_redom=1;
            }
        }else{
            br+=(za_redom*(za_redom-1))/2;
            za_redom=1;
        }

        old_a=a;
    }
    cout<<br;
}
