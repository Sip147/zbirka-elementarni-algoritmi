#include <bits/stdc++.h>

using namespace std;

int n;
double g;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<double>jacine(n);
    for(int i=0;i<n;i++)cin>>jacine[i];
    cin>>g;

    sort(jacine.begin(),jacine.end());

    int k=0;
    double maks_razlika=0;

    int l=0,d=0;

    while(d<n){
        int br_igraca=d-l+1;
        double razlika=(jacine[d]-jacine[l])*br_igraca;
        if(razlika>g){
            l++;
        }else if(br_igraca>k){
            k=br_igraca;
            maks_razlika=razlika;
            d++;
        }else{
            d++;
        }
    }
    cout<<k<<' '<<maks_razlika;
}
