#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int N;
lli sum = 0;
lli x,m,y,a,b;
int main(){
    int i;
    cin>>N;
    for(i=0; i<N; ++i){
        cin>>x>>m;
        y = x+m; 
        a = x%4;
        b = y%4;
        sum ^= (a==3?x:(a==2?1:(a==1?(x-1):0))) ^ (b==3?y:(b==2?1:(b==1?(y-1):0)));
    }
    string ans = sum?"tolik":"bolik";
    cout<<ans<<"\n";
    return 0;
}