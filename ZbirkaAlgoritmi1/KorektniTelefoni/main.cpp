#include <bits/stdc++.h>

using namespace std;

int n;

bool proveri(double a, double b){
    while(a<=b){
        if(a==b)return true;
        b=floor(b/10);
    }
}

void bruteForce(vector<double> &brojevi, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(proveri(brojevi[i],brojevi[j])){
                cout<<"ne"<<endl;
                return;
            }
        }
    }
    cout << "da" << endl;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<double>brojevi(n);
    for(int i=0;i<n;i++)cin>>brojevi[i];

    sort(brojevi.begin(),brojevi.end());

    bruteForce(brojevi,n);

}
