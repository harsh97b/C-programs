#include<stdio.h>
int main(){
int a=2,b=3,c=4,d=5,e;
float m=6.0,n=7.5,p=1.5,q;
e=a/b+c*d;
printf("e=%d\n",e);
e=a*b-c%(d+a)/b;
printf("e=%d\n",e);
e=a+m/b-c*d;
printf("e=%d\n",e);
q=a+m/(b-c)*d;
printf("q=%f\n",q);
e=m*n/a-c%d*p-d;
q=c*b/a-a%b*p-d;
printf("e=%f\n",e);
printf("q=%f\n",q);
return 0;
}
