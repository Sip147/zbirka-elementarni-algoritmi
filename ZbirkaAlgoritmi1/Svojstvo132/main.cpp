#include <bits/stdc++.h>

using namespace std;

int n,a,i,j,k,ii=0,ji=0,ki=0,aa,aaa;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    for(int index=0;index<n;index++){
        cin>>a;
        if(index>0){
            if(aaa<a && aaa<aa && aaa<i){
                i=aaa;
                ii=index-2;
            }else if(aa<aaa && aa<a && aa<i){
                i=aa;
                ii=index-1;
            }else if(a<i && a<aaa && a<aa){
                i=a;
                ii=index;
            }

        }else if(index==0){
            i=a;
            j=a;
            k=a;
            aa=a;
        }
        aaa=aa;
        aa=a;
    }
    cout<<i<<' '<<ii;
    //if(ii<ki && ki<ji && i<j && j<k)cout<<"da";
    //else cout<<"ne";
}
