#include<stdio.h>
#include<stdlib.h>
int max_sum(int [],int);

void main()
{
    int n;
    printf("Enter the number of integers you want to make the array of ");
    scanf("%d",&n);
    int *a= (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d number",i+1);
        scanf("%d",&a[i]);
    }
    int maxsum= max_sum(a,n);
    printf("The maximum subarray sum present in the array is %d",maxsum);
}
int max_sum(int x[],int n)
{
    int thissum=0,maxsum=0;
    for(int i=0;i<n;i++)
    {
        thissum=thissum+x[i];
        if(thissum>maxsum)
        {
            maxsum=thissum;
        }
        else if(thissum<0)
        {
            thissum=0;
        }
    }
    return maxsum;
}
