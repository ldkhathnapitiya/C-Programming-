1)
a)
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is an even number\n", num);
    }
    else
    {
        printf("%d is an odd number\n", num);
    }

    return 0;
}


b) #include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    switch (num % 2)
    {
        case 0:
            printf("%d is an even number \n", num);
            break;
        case 1:
            printf("%d is an odd number \n", num);
            break;
    }

    return 0;
}




2)

#include <stdio.h>
#include <stdlib.h>



int main()
   {
    int choice;
    float n1, n2, result;

    printf("Menu Driven Calculator\n");
    printf("1)Addition\n");
    printf("2)Subtraction\n");
    printf("3) Multiplication\n");
    printf("4) Division\n");
    printf("Enter your choice(1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);

    switch (choice)
     {
        case 1:
            result = n1 + n2;
            printf("Result: %.2f\n",result);
            break;
        case 2:
            result = n1 - n2;
            printf("Result: %.2f\n",result);
            break;
        case 3:
            result = n1 * n2;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (n2 != 0) {
                result = n1 / n2;
                printf("Result:%.2f\n", result);
            } else {
                printf("Error:Division by zero!\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}


3)
#include <stdio.h>
#define PI 3.14159

int main() {
    int choice;
    float rad, result;

    printf("Menu\n");
    printf("1) Calculate the circumference of a circle\n");
    printf("2) Calculate the area of a circle\n");
    printf("3) Calculate the volume of a sphere\n");
    printf("Enter your choice (1-3): ");
    scanf("%d",&choice);

    printf("Enter the radius: ");
    scanf("%f",&rad);

    switch (choice) {
        case 1:
            result = 2 * PI * rad;
            printf("Circumference: %.2f\n", result);
            break;
        case 2:
            result = PI * pow(rad, 2);
            printf("Area: %.2f\n", result);
            break;
        case 3:
            result = (4.0 / 3.0) * PI * pow(rad, 3);
            printf("Volume: %.2f\n", result);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}














4)

#include <stdio.h>
#include <stdlib.h>

int main()
{
char ch;
printf("enter a character:");
scanf("%c",&ch);
switch(ch)
{
    case 'a':printf("a is a vowel");break;
    case 'e':printf("e is a vowel");break;
    case 'i':printf("i is a vowel");break;
    case 'o':printf("o is a vowel");break;
    case 'u':printf("u is a vowel");break;

    default:printf("%c is not a vowel",ch);
}
return 0;
}
































5)

#include <stdio.h>
#include <stdlib.h>


int main() {
    int month;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    switch (month)
     {
        case 1:
            printf("January has 31 days.\n");
            break;
        case 2:
            printf("February has 28 days.\n");
            break;
        case 3:
            printf("March has 31 days.\n");
            break;
        case 4:
            printf("April has 30 days.\n");
            break;
        case 5:
            printf("May has 31 days.\n");
            break;
        case 6:
            printf("June has 30 days.\n");
            break;
        case 7:
            printf("July has 31 days.\n");
            break;
        case 8:
            printf("August has 31 days.\n");
            break;
        case 9:
            printf("September has 30 days.\n");
            break;
        case 10:
            printf("October has 31 days.\n");
            break;
        case 11:
            printf("November has 30 days.\n");
            break;
        case 12:
            printf("December has 31 days.\n");
            break;
        default:
            printf("Invalid month number!\n");
            break;
    }

    return 0;
}

