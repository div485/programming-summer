// Multiplication table of a given number 
#include <stdio.h>

int main() {
    int n;
            printf("Enter the number\n:");
                        scanf("%d",&n);
                                        if(n<=0)
                                                            {
                                                                                        printf("Invalid input enter a positive number");
                                                                                                                        }
                                                                                                                                                            for(int i=1;i<=10;i++)
                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                    printf("the table is %dÃ—%d=%d\n",n,i,n*i);
                                                                                                                                                                                                                                                                                                        }

                                                                                                                                                                                                                                                                                                                                                                return 0;
                                                                                                                                                                                                                                                                                                                                                                                                                        }