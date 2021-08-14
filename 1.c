/**
 * NAME: Sajib Adhikary 
 * ID: CSE1901016103
 * SECTION: 16A3
 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

/**
 * DEFINED: EPSLION, E, F, F1
 */
#define EPSILON 0.01
#define E 0.001
#define F(x) (x * x) - (4 * x) - 10
#define F1(x) (2 * x) - 4

/**
 * @function: func
 * 
 * @param double x
 * @return double
 */
double func(double x)
{
    return x * x * x - x * x + 2;
}

/**
 * @function: bisection
 * 
 * @param double a
 * @param double b
 * @return void
 */
void bisection(double a, double b)
{

    double c = a;
    while ((b - a) >= EPSILON)
    {
        c = (a + b) / 2;

        if (func(c) == 0.0)
            break;

        else if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;
    }

    printf("\n\n In Bisection Method");
    printf("\n\nThe value of root is : %lf", c);
}

/**
 * @function: section
 * 
 * @param double x0
 * @return void
 */
void section(double x0)
{
    double x1, fx0, fx1;
    int step = 1, count = 0;

    while (1)
    {
        fx0 = F(x0);
        fx1 = F(x0);
        x1 = x0 - (fx0 / fx1);
        printf("\nIteration step %d : %lf", step, x1);
        step++;
        count++;

        if (fabs((x1 - x0) <= E))
        {
            printf("\n\n In Section Method");
            printf("\n\n The root is : %lf\n\n", x1);
            printf("\n\nTotal Iteration steps count : %d\n\n\n", count);
            break;
        }
        else
            x0 = x1;
    }

    getch();
}

/**
 * @function: main  
 */
void main()
{
    double a, b;

    printf("Enter your initial guess value : ");
    scanf("%ld %lf", &a, &b);

    if (func(a) * func(b) >= 0)
    {
        bisection(a, b);
    }
    else
    {
        section(a);
    }
}
