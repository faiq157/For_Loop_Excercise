/**
 * C++ program to swap first and last digit of a number
 */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, swappedNum;
    int firstDigit, lastDigit, digits;

    /* Input number from user */
    cout<<"Enter any number: ";
    cin>>num;

    /* Find last digit */
    lastDigit  = num % 10;

    /* Find total number of digit - 1 */
    digits     = (int)log10(num); 

    /* Find first digit */
    firstDigit = (int)(num / pow(10, digits)); 

    swappedNum  = lastDigit;
    swappedNum *= (int) pow(10, digits);
    swappedNum += num % ((int) pow(10, digits));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    cout<<"Original number = "<< num<<endl;
    cout<<"Number after swapping first and last digit: "<< swappedNum;

    return 0;
}
