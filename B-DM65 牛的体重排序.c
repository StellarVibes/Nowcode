void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort(int* a,int left,int right)
{
    if(left>=right)
    {
        return;
    }
    int prev = left;
    int cur = prev+1;
    while(cur<right)
    {
        if(a[cur]<a[left]&&++prev!=cur)
        {
            swap(&a[cur],&a[prev]);
        }
        cur++;
    }
    swap(&a[left], &a[prev]);
    sort(a,left,prev-1);
    sort(a,prev+1,right);
}

double findMedianSortedArrays(int* weightsA, int weightsALen, int* weightsB, int weightsBLen ) 
{
    int a[2000]={0};
    int count = 0;
    for(int i = 0;i<weightsALen;i++)
    {
        a[i]=weightsA[i];
        count++;
    }
    for(int i = count;i<weightsBLen+count;i++)
    {
        a[i]=weightsB[i-count];
    }
    sort(&a,0,weightsALen+weightsBLen);
    for(int i = 0;i<weightsALen+weightsBLen;i++)
    {
        printf("%d ",a[i]);
    }
    if((weightsALen+weightsBLen)%2==0)
    {
        return (a[(weightsALen+weightsBLen)/2]+a[(weightsALen+weightsBLen)/2-1])/2;
    }
    return a[(weightsALen+weightsBLen)/2];
}