class Solution {
public:
    string solve(string str) 
    {
        int right = str.size()-1;
        int left = 0;
        while(left<right)
        {
            int tmp = str[left];
            str[left]= str[right];
            str[right] = tmp;
            left++;
            right--;
        }
        return str;
    }
};