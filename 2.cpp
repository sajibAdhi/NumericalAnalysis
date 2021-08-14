/**
 * NAME: Sajib Adhikary
 * ID: CSE1901016103
 * SECTION: 16A3 
 */

#include <bits/stdc++.h>
using namespace std;
#define EPSILON 0.01
#define MAX_ITER 1000000

double func(double x)
{
    return x * x * x - x * x + 2;
}

/**
 * @function: Bisection 
 * 
 * @param double a
 * @param double b
 * @return void
 */
void bisection(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

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
    cout << "***********BISECTION*************\n\n : ";
    cout << "The value of root is : " << c;
}

/**
 * @function: regularFalsi 
 * 
 * @param double a
 * @param double b
 * @return void
 */
void regulaFalsi(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

    double c = a; // Initialize result

    for (int i = 0; i < MAX_ITER; i++)
    {
        c = (a * func(b) - b * func(a)) / (func(b) - func(a));

        if (func(c) == 0)
            break;

        else if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "***********False Position*************\n\n : ";
    cout << "The value of root is : " << c;
}

/**
 * @function: main
 */
int main()
{
    double a, b;

    printf("Enter your initial guess value : ");
    scanf("%ld %lf", &a, &b);

    bisection(a, b);
    printf("\n\n");
    regulaFalsi(a, b);

    return 0;
}
