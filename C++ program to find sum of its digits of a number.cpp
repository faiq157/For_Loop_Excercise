/**
 * C++ program to find sum of its digits of a number
 */

#include <iostream>
using namespace std;

int main()
{
    int num, sum=0;

    /* Input a number from user */
    cout<<"Enter any number to find sum of its digit: ";
    cin>>num;

    /* Repeat till num becomes 0 */
    while(num!=0)
    {
        /* Find last digit of num and add to sum */
        sum += num % 10;

        /* Remove last digit from num */
        num = num / 10;
    }

    cout<<"Sum of digits =  "<< sum;

    return 0;
}
