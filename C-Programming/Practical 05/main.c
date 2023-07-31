
01.
Using a while loop

#include <stdio.h>

int main() {
    int number = 0;

    while (number <= 100) {
        printf("%d\n", number);
        number++;
    }

    return 0;
}

Using a Do while loop

#include <stdio.h>

int main() {
    int number = 0;

    do {
        printf("%d\n", number);
        number++;
    } while (number <= 100);

    return 0;
}


Using a fpr loop

#include <stdio.h>

int main() {
    for (int number = 0; number <= 100; number++) {
        printf("%d\n", number);
    }

    return 0;
}


02. #include <stdio.h>

int main() {
    int marks[10], total = 0, i;
    float average;

    printf("Enter 10 marks:\n");

    // Reading the marks
    for (i = 0; i < 10; i++) {
        printf("Mark %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    average = (float)total / 10;  // Calculating the average

    printf("Total marks: %d\n", total);
    printf("Average: %.2f\n", average);

    if (average < 50) {
        printf("Fail!\n");
    } else {
        printf("Pass!\n");
    }

    return 0;
}


03. #include <stdio.h>

int main() {
    int number, i;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= number; ++i) {
            factorial *= i;
        }

        printf("Factorial of %d = %llu\n", number, factorial);
    }

    return 0;
}


04. #include <stdio.h>

int main() {
    int number, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10;  // Get the last digit
        sum += digit;        // Add the digit to the sum
        number /= 10;        // Remove the last digit
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}


05. #include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Reversing the digits of the number
    do {
        remainder = number % 10;    // Extracting the last digit
        reversedNumber = reversedNumber * 10 + remainder;    // Building the reversed number
        number /= 10;    // Removing the last digit
    } while (number != 0);

    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}


06. #include <stdio.h>

int main() {
    int base, exponent, result = 1;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculating the power using a loop
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    printf("%d raised to the power of %d is %d\n", base, exponent, result);

    return 0;
}


07. #include <stdio.h>

int main() {
    int n = 10; // Number of Fibonacci numbers to be printed
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    return 0;
}


08. #include <stdio.h>
#include <math.h>

int isArmstrong(int number) {
    int originalNumber, remainder, result = 0, n = 0;

    // Store the original number in a separate variable
    originalNumber = number;

    // Count the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    // Calculate the Armstrong number
    originalNumber = number;
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // Check if the number is Armstrong or not
    if (result == number)
        return 1; // Number is an Armstrong number
    else
        return 0; // Number is not an Armstrong number
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}



09. #include <stdio.h>

int main() {
    char letter;

    printf("ASCII values for letters A to Z:\n");
    for (letter = 'A'; letter <= 'Z'; letter++) {
        printf("%c: %d\n", letter, letter);
    }

    return 0;
}


10. #include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}



11. #include <stdio.h>

int isPrime(int number) {
    if (number <= 1) {
        return 0; // Not a prime number
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0; // Not a prime number
        }
    }

    return 1; // Prime number
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}


12. #include <stdio.h>

void printFactors(int number) {
    printf("Factors of %d: ", number);
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printFactors(number);

    return 0;
}
12. #include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter numbers to add (enter -1 to stop):\n");

    while (1) {
        scanf("%d", &number);

        if (number == -1)
            break;

        sum += number;
    }

    printf("Sum: %d\n", sum);

    return 0;
}


13. #include <stdio.h>

int main() {
    int array[10];
    int i;

    printf("Enter 10 integers:\n");

    // Read user inputs for the array
    for (i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Print the array
    printf("\nArray elements are: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}




14. #include <stdio.h>

int countEvenNumbers(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int evenCount = countEvenNumbers(arr, size);

    printf("The count of even numbers in the array is: %d\n", evenCount);

    return 0;
}


SECTION B

01.
#include <stdio.h>

int main() {
    int numbers[10];
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    printf("Enter 10 numbers:\n");

    // Reading the numbers
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    // Counting positive, negative, and zero numbers
    for (int i = 0; i < 10; i++) {
        if (numbers[i] > 0)
            positiveCount++;
        else if (numbers[i] < 0)
            negativeCount++;
        else
            zeroCount++;
    }

    // Outputting the results
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Zeroes: %d\n", zeroCount);

    return 0;
}


02. #include <stdio.h>

int main() {
    int marks[10];
    int i, sum = 0;
    int max = 0, min = 100;

    printf("Enter the marks of 10 students:\n");

    // Read marks from the user
    for (i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);

        // Update maximum and minimum marks
        if (marks[i] > max)
            max = marks[i];
        if (marks[i] < min)
            min = marks[i];

        // Calculate the sum of marks
        sum += marks[i];
    }

    // Calculate the average marks
    float average = (float)sum / 10;

    printf("\nMaximum marks: %d\n", max);
    printf("Minimum marks: %d\n", min);
    printf("Average marks: %.2f\n", average);

    return 0;
}

03. #include <stdio.h>

int main() {
    int prices[10];
    int sum = 0;
    int count = 0;

    // Input prices
    printf("Enter the prices of 10 items:\n");
    for (int i = 0; i < 10; i++) {
        printf("Item %d: ", i + 1);
        scanf("%d", &prices[i]);
        sum += prices[i];

        if (prices[i] > 200) {
            count++;
        }
    }

    // Calculate and display average
    float average = (float) sum / 10;
    printf("\nAverage value of an item: %.2f\n", average);

    // Display count of items with price > 200
    printf("Number of items with price greater than 200: %d\n", count);

    return 0;
}


04. #include <stdio.h>

int main() {
    int employeeNo, count = 0;
    float basicSalary;

    printf("Enter the employee number and basic salary (enter -999 to end):\n");

    while (1) {
        scanf("%d", &employeeNo);

        if (employeeNo == -999) {
            break;
        }

        scanf("%f", &basicSalary);

        if (basicSalary >= 5000) {
            count++;
        }
    }

    printf("Number of employees with basic salary >= 5000: %d\n", count);

    return 0;
}

05. #include <stdio.h>
int main() {
    int employeeNumber[MAX_EMPLOYEES];
    int hoursWorked[MAX_EMPLOYEES];
    float overtimePayment[MAX_EMPLOYEES];
    int totalEmployees = 0;
    int overtimeExceeding4000 = 0;

    printf("Enter employee number (-999 to end): ");
    scanf("%d", &employeeNumber[totalEmployees]);

    while (employeeNumber[totalEmployees] != -999 && totalEmployees < MAX_EMPLOYEES) {
        printf("Enter hours worked for employee %d: ", employeeNumber[totalEmployees]);
        scanf("%d", &hoursWorked[totalEmployees]);

        // Calculate overtime payment
        if (hoursWorked[totalEmployees] > 40) {
            int overtimeHours = hoursWorked[totalEmployees] - 40;
            int normalHours = hoursWorked[totalEmployees] - overtimeHours;
            overtimePayment[totalEmployees] = (normalHours * OVERTIME_RATE) + (overtimeHours * OVERTIME_RATE_EXTRA);
        } else {
            overtimePayment[totalEmployees] = 0;
        }

        if (overtimePayment[totalEmployees] > 4000) {
            overtimeExceeding4000++;
        }

        totalEmployees++;

        printf("Enter employee number (-999 to end): ");
        scanf("%d", &employeeNumber[totalEmployees]);
    }

    printf("\nEmployee\tOvertime Payment\n");
    for (int i = 0; i < totalEmployees; i++) {
        printf("%d\t\t%.2f\n", employeeNumber[i], overtimePayment[i]);
    }

    float percentageExceeding4000 = (float) overtimeExceeding4000 / totalEmployees * 100;
    printf("\nPercentage of employees whose Overtime Payment exceeds Rs. 4000: %.2f%%\n", percentageExceeding4000);

    return 0;
}


