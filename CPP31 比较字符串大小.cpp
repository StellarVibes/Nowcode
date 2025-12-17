#include <iostream>
using namespace std;

int mystrcmp(const char* src, const char* dst);

int main() {

    char s1[100] = { 0 };
    char s2[100] = { 0 };

    cin.getline(s1, sizeof(s1));
    cin.getline(s2, sizeof(s2));

    int ret = mystrcmp(s1, s2);

    cout << ret << endl;

    return 0;
}

int mystrcmp(const char* src, const char* dst) {
    string s1;
    string s2;
    int i = 0;
    while(src[i])
    {
        s1+=src[i++];
    }
    int a = 0;
    while(dst[a])
    {
        s2+=dst[a++];
    }
    if(s1.size()>s2.size())
    {
        return 1;
    }
    else if(s1.size()==s2.size())
    {
        int w = 0;
        int q = s1.size();
        while(q--)
        {
            if(s1[w]>s2[w])
            {
                return 1;
            }
            if(s1[w]<s2[w])
            {
                return -1;
            }
        }
        return 0;
    }
    else 
    {
        return -1;
    }
}
    
