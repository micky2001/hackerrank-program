#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int getsum(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum=sum+n%10;
        n=n/10;
    }
 return sum;
}

int main() {
	
    int n;
    scanf("%d", &n);
    printf("%d",getsum(n));
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}

