#include <bits/stdc++.h>

using namespace std;

string s;
stack<char>zagrade;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>s;
    for(char c : s){
        if(c=='(' || c=='[' || c=='{'){
            zagrade.push(c);
        }else if(c==')' || c==']' || c=='}'){
            if(zagrade.empty()){
                cout<<"ne";
                return 0;
            }else if(c==')'){
                if(zagrade.top()=='('){
                    zagrade.pop();
                }else{
                    cout<<"ne";
                    return 0;
                }
            }else if(c==']'){
                if(zagrade.top()=='['){
                    zagrade.pop();
                }else{
                    cout<<"ne";
                    return 0;
                }
            }else if(c=='}'){
                if(zagrade.top()=='{'){
                    zagrade.pop();
                }else{
                    cout<<"ne";
                    return 0;
                }
            }
        }
    }
    if(zagrade.empty())cout<<"da";
    else cout<<"ne";
}
