#include <bits/stdc++.h>

using namespace std;

int n,potrebno;

int testera(const vector<int> &visine, const int potrebno){
    int od_vis=0;
    int do_vis=*max_element(visine.begin(),visine.end());
    while(od_vis<=do_vis){
        int visina=od_vis+(do_vis-od_vis)/2;
        long long naseceno=0;
        for(int v: visine){
            if(v>visina)naseceno+=v-visina;
        }
        if(naseceno>=potrebno)od_vis=visina+1;
        else do_vis=visina-1;

    }
    return do_vis;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>visine(n);
    for(int i=0;i<n;i++)cin>>visine[i];
    cin>>potrebno;

    cout<<testera(visine,potrebno);




}
