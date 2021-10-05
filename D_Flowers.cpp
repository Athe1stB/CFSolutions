#include <bits/stdc++.h>
using namespace std;
#define ll  long long int
#define pb push_back
#define mp make_pair
#define fo(i,n) for(int i=0;i<n;i++)
// never submit a fuc**in guess
//let's start
#define m 1000000007
#define n 100005

int main()
{
    ll dp[n];
ios_base::sync_with_stdio(false);
cin.tie(NULL);
dp[0] = 1;



ll sa[n];
sa[0] = dp[0];

int t,k ; cin>>t>>k;
if(k==1){
dp[1] = 2;
}
else{
    dp[1]=1;
}
for(int i=2;i<n;i++){
    if(i<k){
        dp[i] = 1;
    }
    else{
    dp[i] = (dp[i-k]%m+dp[i-1]%m)%m;
    }
}
sa[1] = dp[1];
for(int i=2;i<n;i++){
    sa[i] = (sa[i-1]%m + dp[i]%m)%m;
}
while(t--){
  ll x,y; cin>>x>>y;
  ll ans = ((sa[y]-sa[x])%m + dp[x]%m)%m;
  if(ans<0){
      ans = ans + m;
  }
  cout<<ans<<endl;
}


}

