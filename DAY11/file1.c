#include <stdio.h>

// Function declaration (prototype)
int addNumbers(int a, int b);

int main() {
        int num1, num2, sum;

            // Asking user for input
                printf("Enter two integers: ");
                    scanf("%d %d", &num1, &num2);

                        // Calling the function and storing the result
                            sum = addNumbers(num1, num2);

                                // Displaying the result
                                    printf("Sum: %d\n", sum);

                                        return 0;
}

// Function definition to calculate sum
int addNumbers(int a, int b) {
        return a + b;
}

}
}