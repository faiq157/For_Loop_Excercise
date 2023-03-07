/**
 * C program to print multiplication table of a number
 */

#include <iostream>
using namespace std;

int main()
{
    int i, num;

    /* Input a number to print table */
    cout<<"Enter number to print table: ";
    cin>>num;

    for(i=1; i<=10; i++)
    {
        cout<< num<<"*"<< i<<" = "<< num*i<<endl;
    }

    return 0;
}
