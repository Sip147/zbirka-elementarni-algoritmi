#include <bits/stdc++.h>

using namespace std;



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n,k;
    cin>>n>>k;

    if(n==0){
        cout<<endl;
        return 0;
    }

    vector<long long>rb(n+1);

    long long brel=pow(2,n-1);
    rb[0]=k+1;  //brojanje od 1
    int i=1;
    while(brel>=2){
        if(rb[i-1]>brel){
            long long temp=rb[i-1]-brel;
            rb[i]=brel-temp+1;
            i++;
        }else{
            rb[i]=rb[i-1];
            i++;
        }
        brel/=2;
    }

    vector<int>kod(n);
    if(rb[n-1]==2){
        kod[n-1]=1;
    }else{
        kod[n-1]=0;
    }
    int eksp=1;
    for(int j=n-2;j>=0;j--){
        long long temp1=rb[j];
        long long temp2=pow(2,eksp);
        if(temp1>temp2){
            kod[j]=1;
        }else{
            kod[j]=0;
        }
        eksp++;
    }
    for(int j=0;j<n;j++)cout<<kod[j];
}
