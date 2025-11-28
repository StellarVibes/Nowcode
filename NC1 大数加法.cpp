class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 计算两个数之和
     * @param s string字符串 表示第一个整数
     * @param t string字符串 表示第二个整数
     * @return string字符串
     */
    string solve(string s, string t) 
    {
        int i = s.size() - 1;
        int j = t.size() - 1;
        if (i > j)
        {
            while (j >= 0)
            {
                int a = s[i] - '0';
                int b = t[j] - '0';
                s[i] = a + b+'0';
                j--;
                i--;
            }
            i = s.size() - 1;
            while (i >=0)
            {
                if (s[i] > '9')
                {
                    s[i] -= 10;
                    if (i - 1 >= 0)
                    {
                        s[i - 1]++;
                    }
                    else
                    {
                        s.insert(0, "1");
                    }
                    
                }
                i--;
            }
            return s;
        }
        else {
            while (i >= 0)
            {
                int a = s[i] - '0';
                int b = t[j] - '0';
                if (a + b > 9)
                {
                    t[j] = a + b - 10+'0';
                    if (j - 1 < 0)
                    {
                        t.insert(0, "1");
                    }
                    else
                    {
                        t[j - 1]++;
                    }
                }
                else {
                    t[j] += a;
                }
                i--;
                j--;
            }
            j = t.size() - 1;
            while (j >= 0)
            {
                if (t[j] > '9')
                {
                    t[j] -= 10;
                    if (j - 1 >= 0)
                    {
                        t[j-1]++;
                    }
                    else
                    {
                        t.insert(0, "1");
                    }
                }
                j--;
            }
            return t;
        }
    }
};