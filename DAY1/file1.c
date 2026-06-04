// the sum of N natural numbers using C
#include <stdio.h>

int main() {
    int n;
        int sum=0;
            printf(" Enter a positive number :\n");
            scanf("%d",&n);

            if(n<=0)
            {
                printf("invalid input please enter a valid input");
                }
                    for(int i=1;i<=n;i++)
                        {
                                sum=sum+i;
                                    }
                                        printf("the sum of %d natural numbers is = %d",n,sum);
                                            return 0;
                                            }