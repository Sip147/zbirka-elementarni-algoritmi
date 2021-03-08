#include <bits/stdc++.h>

using namespace std;

int a,b;

int nadji_sumu(int broj){
    int suma=1;
    int najmanji_kolicnik=broj/2+1;
    if(broj==1)return 0;
    for(int i=2;i<najmanji_kolicnik;i++){
        if(broj%i==0){
            suma+=i;
            najmanji_kolicnik=broj/i;
            if(najmanji_kolicnik!=i)suma+=najmanji_kolicnik;
            if(suma>b)return -1;
        }
    }
    return suma;
}

long long divSum(int num)
{
    if(num==1)return 0;
    // Final result of summation of divisors
    long long result = 0;

    // find all divisors which divides 'num'
    for (int i=2; i<=sqrt(num); i++)
    {
        // if 'i' is divisor of 'num'
        if (num%i==0)
        {
            // if both divisors are same then add
            // it only once else add both
            if (i==(num/i))
                result += i;
            else
                result += (i + num/i);
        }
    }

    // Add 1 to the result as 1 is also a divisor
    return (result + 1);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>a>>b;
    if(a==1)a++;
    long long suma1_old;
    for(int i=a;i<=b;i++){
        if(suma1_old==i)i++;
        long long suma1=divSum(i);
        long long suma2=divSum(suma1);
        if (suma2==i){
            cout<<min((long long)i,suma1)<<' '<<max((long long)i,suma1)<<'\n';
            suma1_old=suma1;
        }
    }

}
