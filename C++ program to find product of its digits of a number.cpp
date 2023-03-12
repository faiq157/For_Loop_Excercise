/**
 * C++ program to find product of its digits of a number
 */

#include <iostream>
using namespace std;

int main()
{
    int num, product=0;

    /* Input a number from user */
    cout<<"Enter any number to find product of its digit: ";
    cin>>num;
 			product = (num == 0 ? 0 : 1ll);
    /* Repeat till num becomes 0 */
    while(num!=0)
    {
        /* Find last digit of num and add to sum */
        product =product*( num % 10);

        /* Remove last digit from num */
        num = num / 10;
    }

    cout<<"Product of digits =  "<< product;

    return 0;
}
