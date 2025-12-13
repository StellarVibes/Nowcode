#include <iostream>
#include <map>
#include <string>
#include <cctype>
#include <algorithm>

int main() {
    std::map<std::string, int> m;
    std::string s;
    while (std::cin >> s) 
    {
        // 转换为小写
        std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) 
        {
            return std::tolower(c);
        });
        // 去除标点符号
        s.erase(std::remove_if(s.begin(), s.end(), [](unsigned char c) 
        {
            return std::ispunct(c);
        }), s.end());

        if (!s.empty()) 
        {
            m[s]++;
        }
    }
    for (const auto& e : m) 
    {
        std::cout << e.first << ":" << e.second << std::endl;
    }

    return 0;
}