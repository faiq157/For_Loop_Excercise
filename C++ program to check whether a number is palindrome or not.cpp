/**
 * C++ program to check whether a number is palindrome or not
 */

#include <iostream>
using namespace std;

int main()
{
    int n, num, rev = 0;

    /* Input a number from user */
    cout<<"Enter any number to check palindrome: ";
    cin>>n;

    /* Copy original value to 'num' to 'n'*/
    
    num = n; 

    /* Find reverse of n and store in rev */
    while(n != 0)
    {
        rev = (rev * 10) + (n % 10);
        n  /= 10;
    }

    /* Check if reverse is equal to 'num' or not */
    if(rev == num)
    {
        cout<<"Number is palindrome."<< num;
    }
    else
    {
        cout<<"Number  is not palindrome."<< num;
    }

    return 0;
}
