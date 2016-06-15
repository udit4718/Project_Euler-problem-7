#include<stdio.h>
#include<math.h>
#define MAX 10000000
void prime(int n)
{
    int i,j,count=0;

    if (n == 1) {
        printf("2\n");
        return;
    }
    for(i=3;i<=MAX;i+=2)
    {
        int isPrime=1;
        int jMax = sqrt(i);
        for(j=3;j<=jMax;j+=2)
        {
            if(i%j==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime)
        {
            if(++count==n)
            {
                printf("%d\n",i);
                return;
            }
        }
    }
}

void main()
{
 prime(10000);
}
