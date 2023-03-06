/**
 * C program to print all Odd numbers from 1 to n
 */

#include <iostream>
using namespace std;

int main()
{
    int i, n;
    
    /* Input upper limit from user */
    cout<<"Print odd numbers till:";
    cin>> n;

    cout<<"All odd numbers from 1 to n are: \n"<< n;

    /* Start loop from 1 and increment it by 1 */
    for(i=1; i<=n; i++)
    {
        /* If 'i' is odd then print it */
        if(i%2!=0)
        {
            cout<< i;
        }
    }

    return 0;
}
