#include<bits/stdc++.h>
using namespace std;

string a(string& s1)
{
    string s;
    int i = s1.size()-1;
    while(s1[i])
    {
        s+=s1[i];
        i--;
    }
    return s;
}

int main(){
    string s;
    getline(cin,s);
    s = a(s);
    cout<<s;

    return 0;
}