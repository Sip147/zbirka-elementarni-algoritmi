#include <bits/stdc++.h>

using namespace std;

pair<int,int>razl;

void nadji_u_stablu(pair<int,int>razl,pair<int,int>levi,pair<int,int>sred,pair<int,int>desni){
    if(sred==razl)return;
    if((double)razl.first/razl.second>(double)sred.first/sred.second){
        cout<<'D';
        pair<int,int>novi=make_pair(sred.first+desni.first,sred.second+desni.second);
        nadji_u_stablu(razl,sred,novi,desni);
    }else if((double)razl.first/razl.second<(double)sred.first/sred.second){
        cout<<'L';
        pair<int,int>novi=make_pair(levi.first+sred.first,levi.second+sred.second);
        nadji_u_stablu(razl,levi,novi,sred);
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>razl.first>>razl.second;

    nadji_u_stablu(razl,make_pair(0,1),make_pair(1,1),make_pair(1,0));

}
