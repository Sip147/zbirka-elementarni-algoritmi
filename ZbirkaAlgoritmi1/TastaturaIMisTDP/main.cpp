#include <bits/stdc++.h>


using namespace std;

int t,m,budzet;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>t;
    vector<int>tastature(t);
    for(int i=0;i<t;i++)cin>>tastature[i];
    sort(tastature.begin(),tastature.end());

    cin>>m;
    vector<int>misevi(m);
    for(int i=0;i<m;i++)cin>>misevi[i];
    sort(misevi.begin(),misevi.end(), greater<int>());

    cin>>budzet;

    int i=0,j=0;
    int maks_cena=0;
    while(i<t && j<m){
        int cena=misevi[j]+tastature[i];
        if(cena>budzet){
            j++;
            continue;
        }
        if(cena<budzet){
            maks_cena=max(maks_cena,cena);
            i++;
            continue;
        }
        if(cena==budzet){
            maks_cena=cena;
            break;
        }
    }
    cout<<maks_cena;
}
