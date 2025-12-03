#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 0,q = 0;
    cin>>n>>q;
    vector<int> arr(n+1);
    vector<long long> dp(n+1);
    for(int i = 1;i<=n;i++)
        cin>>arr[i];
    for(int i = 1;i<=n;i++)
        dp[i]=dp[i-1]+arr[i];
    while(q--)
    {
        int l = 0,r = 0;
        cin>>l>>r;
        cout<<dp[r]-dp[l-1]<<endl;
    }
    
    return 0;
}