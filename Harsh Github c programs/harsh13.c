#include<stdio.h>
int main()
{//FIBNOCCI SERIES
int i=0,j=1,k,l,n;
printf("FIBNOCCI SERIES\nEnter number of terms=");
scanf("%d",&n);
if(n!=0)
printf("%d\n",0);
if(n!=1)
printf("%d\n",1);
for(l=1;l<=n-2;l++,i=j,j=k)
{
    k=i+j;
    printf("%d\n",k);
}

}
