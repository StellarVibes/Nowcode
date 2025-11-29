class Solution {
public:
    bool judge(string str) 
    {
        if(str.size()==1)
        {
            return true;
        }
        int left = 0;
        int right = str.size()-1;
        while(left<right)
        {
            if(str[left]!=str[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};