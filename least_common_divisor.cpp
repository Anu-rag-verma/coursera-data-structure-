// least common multiple
#include<iostream>
using namespace std;
int gcd(long long a,long long b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main(){
    long long c,d;
    cin>>c>>d;
    long long lcm=c*d/gcd(c,d);
    cout<<lcm;
    return 0;
}