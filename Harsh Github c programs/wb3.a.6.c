#include<stdio.h>
int main()
{
int p,m,w,lp,lm,lw,im,iw;
printf("Enter population of the town\n");
scanf("%d",&p);
m=(p*52)/100;
w=p-m;
lp=(p*48)/100;
lm=(p*35)/100;
lw=lp-lm;
im=m-lm;
iw=w-lw;
printf("Iliterate men=%d and Iliterate women=%d",im,iw);
return 0;
}
