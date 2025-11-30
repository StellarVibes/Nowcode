class Solution 
{
    public:
        static int num;
        static int i;
    public:
        Solution()
        {
            num+=i;
            i++;
        }
        int Sum_Solution(int n) 
        {
            for(int i = 1;i<n;i++)
            {
                Solution();
            }
            return num;
        }
};

int Solution::num = 0;
int Solution::i = 1;