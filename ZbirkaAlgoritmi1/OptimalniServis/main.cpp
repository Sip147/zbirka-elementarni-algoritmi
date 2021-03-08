#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>duzine(n);
    for(int i=0;i<n;i++)cin>>duzine[i];

    int dan=-1,j=1,suma1=0,suma2=0;
    for(int i=0;i<duzine.size();i++){
        suma1+=duzine[i];
        dan++;
        while(suma2<=suma1){
            suma2+=duzine[n-j];
            j++;
            duzine.pop_back();
        }
    }
    cout<<dan;
}
