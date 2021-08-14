/**
 * NAME: Sajib Adhikary
 * ID: CSE1901016103
 * SECTION: 16A3 
 */

#include <bits/stdc++.h>
using namespace std;
#define N 3

/**
 * @function: add
 * 
 * @param int A[][N]
 * @param int B[][N]
 * @param int C[][N]
 * @return void
 */
void add(int A[][N], int B[][N], int C[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            C[i][j] = A[i][j] + B[i][j];
}

/**
 * @function: subtract
 * 
 * @param int A[][N]
 * @param int B[][N]
 * @param int C[][N]
 * @return void
 */
void subtract(int A[][N], int B[][N], int C[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            C[i][j] = A[i][j] - B[i][j];
}

/**
 * @function: show
 * 
 * @param int see[][N]
 * @param int size
 * @return void
 */
void show(int see[][N], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            cout << see[i][j] << " ";
        cout << endl;
    }
}

/**
 * @function: main
 */
int main()
{
    int A[N][N] = {{1, 1, 1},
                   {2, 2, 2},
                   {3, 3, 3}};

    int B[N][N] = {{1, 1, 1},
                   {2, 2, 2},
                   {3, 3, 3}};

    int addResult[N][N], subResult[N][N], result[N][N]; // To store result
    int i, j;
    add(A, B, addResult);
    subtract(A, B, subResult);

    cout << "Addition Result matrix is " << endl;
    show(addResult, N);

    cout << "Subtraction Result matrix is " << endl;
    show(subResult, N);

    cout << "The Final matrix is " << endl;
    add(addResult, subResult, result);
    show(result, N);

    return 0;
}