int* sortColor(int* colors, int colorsLen, int* returnSize ) {
    int * arr=(int*)malloc(sizeof(4)*colorsLen);
    * returnSize =colorsLen;
    int red = 0,white = 0,blue = 0,count = 0;
    for(int i = 0;i<colorsLen;i++)
    {
        if(colors[i]==0)
        {
            red++;
        }
        if(colors[i]==1)
        {
            white++;
        }
        if(colors[i]==2)
        {
            blue++;
        }
    }
    while(red--)
    {
        arr[count++]=0;
    }
    while(white--)
    {
        arr[count++]=1;
    }
    while(blue--)
    {
        arr[count++]=2;
    }
    return arr;
}