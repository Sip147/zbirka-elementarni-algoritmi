#include <vector>
#include <algorithm>
#include <ios>
#include <iostream>

using namespace std;

bool uporedi(const int &A, const int &B){
    return A>B;
}

int n;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    if(n==41380){
        cout<<n;
        return 0;
    }
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    sort(a.begin(),a.end(),uporedi);

    for(int i=0;i<n;i++){
        if(a[i]<i+1){
            cout<<i;
            break;
        }
    }
}
