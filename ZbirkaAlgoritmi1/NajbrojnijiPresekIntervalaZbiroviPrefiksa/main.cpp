#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>razlika_ljudi(2*n);
    int maks_vreme=0;
    for(int i=0;i<n;i++){
        int dosao, otisao;
        cin>>dosao>>otisao;
        razlika_ljudi[dosao]+=1;
        razlika_ljudi[otisao]-=1;
        maks_vreme=max(maks_vreme,otisao);
    }

    int maks_ljudi=0;
    int ljudi=0;
    for(int i=0;i<maks_vreme;i++){
        ljudi+=razlika_ljudi[i];
        if(maks_ljudi<ljudi){
            maks_ljudi=ljudi;
        }
    }
    cout<<maks_ljudi;
}
