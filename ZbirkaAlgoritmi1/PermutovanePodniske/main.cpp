#include <bits/stdc++.h>

using namespace std;

int n,m,br;
string s,x;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>s>>x;
    n=s.length();
    m=x.length();

    map<char,int>br_x;
    map<char,int>br_s;
    for(int i=0;i<m;i++){
        br_x[x[i]]++;
        br_s[s[i]]++;
    }

    if(br_x.size()==br_s.size()){
        bool isti=true;
        for(auto it_s=br_s.begin() ,it=br_x.begin();it!=br_x.end();it++,it_s++){
            if(!(it->first==it_s->first && it->second==it_s->second)){
                isti=false;
            }
        }
        if(isti)br++;
    }
    for(int i=0;i<n-m;i++){
        br_s[s[i]]--;
        if(br_s[s[i]]==0){
            br_s.erase(s[i]);
        }
        br_s[s[i+m]]++;
        if(br_s.size()==br_x.size()){
            bool isti=true;
            for(auto it_s=br_s.begin() ,it=br_x.begin();it!=br_x.end();it++,it_s++){
                if(!(it->first==it_s->first && it->second==it_s->second)){
                    isti=false;
                }
            }
            if(isti)br++;
        }
    }

    cout<<br;
}
