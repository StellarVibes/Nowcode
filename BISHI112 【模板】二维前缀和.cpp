#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 0,m = 0,q = 0;
    cin>> n>>m>>q;
    vector<vector<long long>> vv(n,vector<long long>(m));
    vector<vector<long long>> dp(n+1,vector<long long>(m+1));
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cin>>vv[i][j];
        }
    }
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=m;j++)
        {
            dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+vv[i-1][j-1];
        }
    }
    // for(int i = 1;i<=n;i++) //dp
    // {
    //     for(int j = 1;j<=m;j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i =0;i<n;i++) //vv
    // {
    //     for(int j = 0;j<m;j++)
    //     {
    //         cout<<vv[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    while(q--)
    {
        int x_1 = 0,y_1 = 0,x_2=0,y_2 = 0;
        cin>>x_1>>y_1>>x_2>>y_2;
        cout<<dp[x_2][y_2]-dp[x_1-1][y_2]-dp[x_2][y_1-1]+dp[x_1-1][y_1-1]<<endl;
    }

    return 0;
}