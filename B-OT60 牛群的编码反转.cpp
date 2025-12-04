class Solution {
public:
    int reverseBits(int n) 
    {
        int num = 0;
        for(int i = 0; i < 32; i++) 
        {
            int bit = (n >> i) & 1;// 获取n的第i位
            num |= bit << (31 - i); // 将该位移动到目标位置，并与num进行按位或
        }
        return num;
    }
};