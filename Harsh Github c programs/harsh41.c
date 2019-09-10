#include<stdio.h>
#include<stdlib.h>
void abc()
{
    int *a,i,n;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("\n");
    for(i=0;i<n;i++)
        printf("%d",&a[i]);
    free(a);
}
void main()
{
    int i;
    for(i=0;i<100;i++)
        abc();
}
