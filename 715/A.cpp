#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a)*1ll * (b)) / gcd(a, b)

using namespace std;

void sol()
{
    ll n,a;
    cin>>n;
    vector<ll>even,odd;
    for(ll i=0;i<n;i++){
    	cin>>a;
    	if(a&1){
    		odd.push_back(a);
		}else{
			even.push_back(a);
		}
	}
	ll p=odd.size(),q=even.size();
	for(ll i=0;i<p;i++){
		cout<<odd[i]<<" ";
	}
	for(ll i=0;i<q;i++){
		cout<<even[i]<<" ";
	}
	cout<<"\n";
   
    
    
    
}

int main() {
    
    long long int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        sol();
    }
	
	
	return 0;
}
 
