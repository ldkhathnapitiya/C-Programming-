1)
#include <stdio.h>

int main()
{
    int age;

    printf("HI, HOW OLD ARE YOU? ");
    scanf("%d", &age);

    printf("\n\nWELCOME %d\nLET’S BE FRIENDS!\n", age);

}

2)
#include <stdio.h>

int main()
{

    printf("%-4d%-5d%-6d\n", 2, 4, 8);
    printf("%-4d%-5d%-6d\n", 3,9,27);
    printf("%-4d%-5d%-6d\n", 4,16,64);

}

3)

#include <stdio.h>

int main()
{
    int distance,time,avgs;

    printf("Enter the Distance travelled in meters: ");
    scanf("%d",&distance);
    printf("Enter the Time taken in secounds: ");
    scanf("%d",&time);

    avgs=distance/time;

    printf("Average speed is: %d m/s",avgs);

}

4)
#include <stdio.h>

float fahrenheit_to_celsius(float fahrenheit) {
    float celsius = (5.0 / 9.0) * (fahrenheit - 32);
    return celsius;
}

int main() {

    float fahrenheit_values[] = {68, 150, 212, 0, -22, -200};
    int num_values = sizeof(fahrenheit_values) / sizeof(fahrenheit_values[0]);

    for (int i = 0; i < num_values; i++) {
        float fahrenheit = fahrenheit_values[i];
        float celsius = fahrenheit_to_celsius(fahrenheit);
        printf("%.2f degrees Fahrenheit = %.2f degrees Celsius\n", fahrenheit, celsius);
    }


}
