#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n = 0,m = 0,sum = 0;
    cin>>n>>m;
    vector<long long> v;
    v.push_back(0);
    for(long long i = 0;i<n;i++)
    {
        int num = 0;
        cin>>num;
        sum+=num;
        v.push_back(sum);
    }

    for(long long i = 0;i<m;i++)
    {
        int left = 0,right = 0;
        cin>>left>>right;
        if(i!=m-1) cout<<v[right]-v[left-1]<<endl;
        else cout<<v[right]-v[left-1];
    }
}