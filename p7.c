#include<stdio.h>
#include<math.h>
 int prime()
 { long num=28;
 int count=0;
  while(count<=10000)
  {  long j;

     int isprime=1;
     int jMax = sqrt(num);
     printf("%d",jMax);getch();
     for(j=2;j<=jMax;j++)
     {
       if(num%j==0)
       {
         isprime=0;
         break;
       }

    }

     if(isprime==1)
     {
       count++;
     }
      num++;
  }
   return num;
 }

void main()
{
   long x;
  x=prime();

  printf("%li",--x);
}
