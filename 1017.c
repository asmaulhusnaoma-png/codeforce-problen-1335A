#include <stdio.h>
int main()
{
    int t;
    int n;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
         scanf("%d", &n);
         int updatedCandies = n - 1;
         printf("%d\n",updatedCandies/2);


    }
}
