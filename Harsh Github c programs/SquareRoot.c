#include<stdio.h>
#include<math.h>
void main()
{
 float i,n,a;
 float D;
 n=0.00001;   // This is taken small so that we can calculate upto decimal places also
     printf("ENTER A NUMBER : ");
     scanf("%f",&D);
     for(i=0;i<D;i=i+n)
        {
            if((i*i)>D)     // This if() is used to calculate the final value as soon as the square of the number exceeds
            {
                i=i-n;
                break;      //  the number then we deduct the value exceeded and stop the procedure using break; this is our final value which is stored in m;
            }
        }
        a=sqrt(D);
     printf("%.4f",a);
}
