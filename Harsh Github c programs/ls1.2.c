#include<stdio.h>
int main(){
int a,b,c,d;
float w,x,y,z;
printf("Enter Four integer Values");
scanf("%d%d%d%d",&a,&b,&c,&d);
printf("Enter Four floating point values");
scanf("%f%f%f%f",&w,&x,&y,&z);
c=a/b;
y=a/b;
printf("c=%d,y=%f\n",c,y);
c=w/x;
y=w/x;
printf("c=%d,y=%f\n",c,y);
c=a/x;
y=w/b;
printf("c=%d,y=%f\n",c,y);
c=d/3;
y=d/3;
printf("c=%d,y=%f\n",c,y);
c=d/3.0;
y=d/3.0;
printf("c=%d,y=%f\n",c,y);
c=z/3;
y=z/3;
printf("c=%d,y=%f\n",c,y);
c=z/3.0;
y=z/3.0;
printf("c=%d,y=%f\n",c,y);
}
