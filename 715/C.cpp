#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

vector< vector <ll> > dp(2001,vector<ll>(2001,-1));
vector<ll>s(2001);
ll fun(ll start,ll end){
	if(dp[start][end]!=-1){
		return dp[start][end];
	}
	if(start==end){
		return 0;
	}
	if(start==end-1){
		return (s[end]-s[start]);
	}
	dp[start][end]=(min(fun(start,end-1),fun(start+1,end))+s[end]-s[start]);
	return dp[start][end];
}

int main()
{
	ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
    	cin>>s[i];
	}
	sort(s.begin(),s.begin()+n);
	ll ans=fun(0,n-1);
	cout<<ans<<"\n";
	return 0;
}
