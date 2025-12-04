int* sortCows(int* cows, int cowsLen, int* returnSize ) {
    * returnSize=cowsLen;
    int count = 0;
    for(int i = 0;i<cowsLen;i++)
    {
        if(cows[i]==0)
        {
            count++;
        }
    }
    for(int i = 0;i<cowsLen;i++)
    {
        if(i<count)
        {
            cows[i]=0;
        }
        else{
            cows[i]=1;
        }   
    }
    return cows;
}