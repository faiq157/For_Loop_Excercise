/**
 * C program to find sum of natural numbers between 1 to n
 */

#include <iostream>
using namespace std;
int main()
{
    int i, n, sum=0;

    /* Input upper limit from user */
    cout<<"Enter upper limit: ";
    cin>>n;

    /* Find sum of all numbers */
    for(i=1; i<=n; i++)
    {
        sum += i;
    }

    cout<<"Sum of first  natural numbers = "<< n<<endl<<sum;

    return 0;
}
