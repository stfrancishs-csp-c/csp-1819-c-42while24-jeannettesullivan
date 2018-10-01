#include <stdio.h>
int main(void)
{
    int sum=0;
    int k=0;

   while (k<5)
    {
        sum+=k; //use something different in "while" version
        k++;
        printf ("k - %2d sum - %4.1d\n",k,sum);
    }
    //k=5;

    for (k=10;k>0;k--) {
        k=k-1; //use something different in "for" version
        printf ("%6.1d\n", k);
    }
        printf ("Blastoff!");
}

