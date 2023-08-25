#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[10]={};
arr[0]=1;
arr[1]=2;
arr[2]=10;
arr[9]=8;
int i;
for(i=0;i<=9;i++)
    printf("%d ",2*arr[i]+1);
    return 0;
}
