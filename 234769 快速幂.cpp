#include <iostream>
using namespace std;

long long quick_pow(long long a, long long b, long long c) 
{
    long long result = 1;
    a %= c; // 先对a取模，避免a过大
    while (b > 0) 
    {
        if (b % 2 == 1) // 如果b是奇数，乘上当前的a
        { 
            result = (result * a) % c;
        }
        a = (a * a) % c; // 平方a
        b /= 2; // 指数减半
    }
    return result;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        long long a, b, c;
        cin >> a >> b >> c;
        cout << quick_pow(a, b, c) << endl;
    }

    return 0;
}