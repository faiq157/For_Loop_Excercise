/**
 * C program to find last digit of a number
 */

#include <iostream>
using namespace std;

int main()
{
    int n, lastDigit;

    /* Input number from user */
    cout<<"Enter any number: ";
    cin>> n;

    /* Get the last digit */
    lastDigit = n % 10;

    cout<<"Last digit = "<< lastDigit;

    return 0;
}
