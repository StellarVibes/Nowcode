#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int a = 0,b = 0,c = 0;
    for(auto e:s)
    {
        if(e=='a')
        {
            a++;
        }
         if(e=='b')
        {
            b++;
        }
         if(e=='c')
        {
            c++;
        }
    }
    cout<<a<<" "<<b<<" "<<c;
    
    return 0;
}