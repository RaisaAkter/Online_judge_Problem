#include<stdio.h>
main()
{
    int i,j,osum=0,esum=0;
    int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    for(i=0,j=1;i<20;i=i+2,j=j+2)
    {
        osum+=arr[i];
        esum+=arr[j];
    }
    printf("sum of odd position number: %d\nsum of even position number: %d\n",osum,esum);
}
