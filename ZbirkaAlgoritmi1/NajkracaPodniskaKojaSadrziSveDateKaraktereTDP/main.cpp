#include <bits/stdc++.h>

using namespace std;

string s,x;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>s>>x;

    int min_slova=s.length();
    bool moze=false;


    int l=0,d=0;

    map<char,int>ponavljanja;

    int sva_slova=0;

    while(d<s.length()){
        ponavljanja[s[d]]++;
        if(ponavljanja[s[d]]==1){
            for(int i=0;i<x.length();i++){
                if(s[d]==x[i]){
                    sva_slova++;
                    break;
                }
            }
        }else if(ponavljanja[s[d]]==0){
            for(int i=0;i<x.length();i++){
                if(s[d]==x[i]){
                    sva_slova--;
                    break;
                }
            }
        }
        while(true){
            bool nastavi=false;
            bool slovo_u_x=false;
            for(int i=0;i<x.length();i++){
                if(s[l]==x[i]){
                    slovo_u_x=true;
                    break;
                }
            }
            if(slovo_u_x){
                while(ponavljanja[s[l]]>1){
                    ponavljanja[s[l]]--;
                    l++;
                    nastavi=true;
                }
                if(nastavi){
                    continue;
                }
                break;
            }else{
                ponavljanja[s[l]]--;
                l++;
            }
        }

        if(sva_slova==x.length()){
            min_slova=min(min_slova,d-l+1);
            moze=true;
        }
        d++;
    }
    moze ? cout<<min_slova : cout<<"nema";
}
