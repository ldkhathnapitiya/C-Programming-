1)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("LakmiDeshani\nEheliyagoda Central Collage");
}

2)
#include <stdio.h>

int main()
{
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");

}

3) #include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float b;
    double c;
    char d;


    printf("Enter an integer value: ");
    scanf("%d", &a);

    printf("Enter a float value: ");
    scanf("%f", &b);

    printf("Enter a double value: ");
    scanf("%lf", &c);

    printf("Enter a character value: ");
    scanf(" %c", &d);


    printf("Value of intValue: %d\n ",a);
    printf("value of float value:%f\n",b);
    printf("Value of doubleValue: %.5lf\n",c);
    printf("Value of charValue: %c\n", d);

}



4)

#include <stdio.h>

int main()
{
    int num1, num2, total;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    total = num1 + num2;

    printf("The total is: %d\n", total);

    return 0;
}

5)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, average;

    printf("Enter first number: ");
    scanf("%f", &n1);

    printf("Enter second number: ");
    scanf("%f", &n2);

    average = (n1 + n2) / 2;

    printf("The average is: %.2f\n", average);

}



6)
 #include <stdio.h>

int main()
{
    char studentName[100];
    printf("Enter your name: ");
    fgets(studentName, sizeof(studentName), stdin);

    int birthYear;
    printf("Enter birth year: ");
    scanf("%d", &birthYear);

    int currentYear = 2023;
    int age = currentYear - birthYear;

    printf("Student: %s", studentName);
    printf("Age in 2023: %d\n", age);


}


7)

#include <stdlib.h>

int main()
{
    int a, b, temp;
    printf("Enter a value for 'a': ");
    scanf("%d", &a);
    printf("Enter a value for 'b': ");
    scanf("%d", &b);
    printf("Before swapping a = %d, b = %d \n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping a = %d, b = %d", a, b);

}
