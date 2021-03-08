#include <bits/stdc++.h>

using namespace std;

int n,l;

bool mozeUdaljenost(const vector<int>& lokacije, int l, int n, int udaljenost){
    int poslednja_kuca=0; //pozicija poslednje izgradjene kuce u lokacijama
    for(int i=1;i<l && n>1;i++){
        if(lokacije[i]-lokacije[poslednja_kuca]>=udaljenost){
            n--;
            poslednja_kuca=i;
        }
    }
    if(n==1)return true;
    return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n>>l;
    vector<int>lokacije(l);
    for(int i=0;i<l;i++)cin>>lokacije[i];

    sort(lokacije.begin(),lokacije.end());

    //cout<<mozeUdaljenost({9,4,6,2,10,14,12},7,3,3);

    int od_udaljenosti=1;
    int do_udaljenosti=lokacije[l-1]-lokacije[0]/(n-1);
    while(od_udaljenosti<do_udaljenosti){
        int udaljenost=od_udaljenosti+ceil((do_udaljenosti-od_udaljenosti)/2.0);
        if(mozeUdaljenost(lokacije,l,n,udaljenost))od_udaljenosti=udaljenost;
        else do_udaljenosti=udaljenost-1;
    }


    cout<<od_udaljenosti;
}
