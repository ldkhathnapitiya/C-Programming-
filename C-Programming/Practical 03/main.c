1)

#include <stdio.h>
#include <stdlib.h>

int main()
{int n1,n2,highestnumber;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    if (n1>n2)
    highestnumber=n1;
    else
    highestnumber=n2;
    printf("The highest number is %d \n",highestnumber);
    return 0;
}



2)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1,no2,no3,max;
    printf("Enter three numbers:");
    scanf("%d %d %d",&no1,&no2,&no3);
    if(no1>no2&&no1>no3)
    max=no1;
    else if(no2>no1&&no2>no3)
    max=no2;
    else
    max=no3;

    printf("The highest number is %d ",max);
    return 0;
}






3)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int empname[50];
    float bs,ns,inc;
    printf("Enter Employee name:");
    scanf("%s",&empname);
    printf("Enter basic salary:");
    scanf("%f",&bs);
    if(bs>=10000)
    inc=bs*0.15;
    else if(bs>=5000)
    inc=bs*0.10;
    else
    inc=bs*0.05;
    ns=bs+inc;
    printf("Employee name %s: \n",empname);
    printf("Enter new salary %2f:\n",ns);




    return 0;
}














4)
#include <stdio.h>


int main()
   {
    const float pi = 3.14159;
    float rad, diam, circ, area;

    printf("Enter the radius of the circle:");
    scanf("%f", &rad);

    if (rad >= 0)
    {
        diam = rad * 2;
        circ = 2 * 3.14159  * rad;
        area =   3.14159* rad * rad;

        printf("Diameter: %f\n", diam);
        printf("Circumference: %f\n", circ);
        printf("Area: %f\n", area);
    } else {
        printf("The input radius was incorrect.Radius must be a positive number.\n");
    }

    return 0;
}












5)
#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter  two integers: ");
    scanf("%d %d", &n1,&n2);



    if (n2!= 0 && n1 % n2 == 0)
    {
        printf("%d is a multiple of %d \n", n1, n2);
    }
    else
    {
        printf("%d is not a multiple of %d \n", n1, n2);
    }

    return 0;
}
























6)

#include <stdio.h>

int main()
{

    printf("A: %d\n", 'A');
    printf("B: %d\n", 'B');
    printf("C: %d\n", 'C');


    printf("a: %d\n", 'a');
    printf("b: %d\n", 'b');
    printf("c: %d\n", 'c');


    printf("0: %d\n", '0');
    printf("1: %d\n", '1');
    printf("2: %d\n", '2');


    printf("$: %d\n", '$');
    printf("*: %d\n", '*');
    printf("+: %d\n", '+');
    printf("/: %d\n", '/');


    printf("Blank character: %d\n", ' ');

    return 0;
}












7)
#include <stdio.h>

int main() {
    float bs, add, bonus, monthly_sales;
    char city;

    printf("Enter the Basic Salary: ");
    scanf("%f", &bs);

    printf("Enter the years of service: ");
    int years_of_service;
    scanf("%d", &years_of_service);

    printf("Enter the city ('C' for Colombo): ");
    scanf(" %c", &city);

    printf("Enter the monthly sales: ");
    scanf("%f", &monthly_sales);


    if (years_of_service > 5)
    {
        add= 0.1 * bs;
    } else
   {
        add = 0;
    }


    if (city == 'C')
    {
        add += 2500;
    }


    if (monthly_sales <= 25000) {
        bonus= 0.1;
    } else if (monthly_sales <= 50000) {
        bonus= 0.12;
    } else {
        bonus= 0.15;
    }


    float gross_remuneration = bs+ add+ (bonus * monthly_sales);

    printf("Gross Monthly Remuneration: %.2f\n", gross_remuneration);

    return 0;
}
