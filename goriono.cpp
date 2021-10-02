#include<bits/stdc++.h>
using namespace std;
#define int long long
int min(int x,int y)
{
    if(x<y)
        return x;
    return y;
}
int max(int x,int y)
{
    if(x>y)
        return x;
    return y;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        for(int i=31;i>=0;i--)
        {
            if(((1<<i)&n)==n)
            {
                cout<<min((1<<i)-1,n)-(1<<(i-1))+1<<endl;
                break;
            }
            else if(((1<<i)&n) > 0)
            {
                cout<<max(min((1<<(i+1))-1,n)-(1<<i)+1,(1<<i)-(1<<(i-1)))<<endl;
                break;
            }
        }
    }
}
