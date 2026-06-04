#include <stdio.h>

int main() {
    long long num;
            int count = 0;

                
                                printf("Enter an integer: ");
                                                    scanf("%lld", &num);

                                                                            // Make a temporary copy to preserve the original number if needed
                                                                                                        long long temp = num;

                                                                                                                                        // Use a do-while loop to handle 0 correctly
                                                                                                                                                                            do {
                                                                                                                                                                                                                        count++;
                                                                                                                                                                                                                                                                            temp /= 10; // Remove the last digit
                                                                                                                                                                                                                                                                                                                                    } while (temp != 0);

                                                                                                                                                                                                                                                                                                                                                                                                printf("Total number of digits: %d\n", count);

                                                                                                                                                                                                                                                                                                                                                                                                                                                                return 0;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                }