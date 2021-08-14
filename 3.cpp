/**
 * NAME: Sajib Adhikary
 * ID: CSE1901016103
 * SECTION: 16A3 
 */
#include<bits/stdc++.h>
#define EPSILON 0.001
using namespace std;

/**
 * @function:func
 * 
 * @param double x
 * @return double
 */
double func(double x)
{
	return x*x*x - x*x + 2;
}


/**
 * @function: derivFunc
 * 
 * @param double x
 * @return double
 */
double derivFunc(double x)
{
	return 3*x*x - 2*x;
}


/**
 * @function: newtonRaphson
 * 
 * @param double x
 * @return double
 */
void newtonRaphson(double x)
{
	double h = func(x) / derivFunc(x);
	while (abs(h) >= EPSILON)
	{
		h = func(x)/derivFunc(x);

		x = x - h;
	}

	cout << "The value of the root is : " << x;
}


/**
 * @function: main
 */
int main()
{
	double x0 = -30; // Initial values assumed
	newtonRaphson(x0);
	return 0;
}
