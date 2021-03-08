#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<int>push(n);
    for(int i=0;i<n;i++)cin>>push[i];
    vector<string>komande(2*n);
    int komi=0;

    stack<int>push2;
    stack<int>pop;
    vector<int>pop1(n);
    int pushbr=0, popbr=0;
    int j=0;
    for(int i=0;i<n;i++){
        int el;
        cin>>el;
        pop1[i]=el;
        push2.push(push[i]);
        if(pop1[j]!=push2.top()){
            komande[komi++]="push";
            pushbr++;
        }else{
            komande[komi++]="push";
            pushbr++;
            while(j<=i && pop1[j]==push2.top()){
                popbr++;
                j++;
                push2.pop();
                komande[komi++]="pop";
            }
        }

    }
    if(popbr!=pushbr){
        cout<<'-';
        return 0;
    }else{
        for(int i=0;i<2*n;i++)cout<<komande[i]<<'\n';
    }

}
