//Clayton Arndt
// HW1
//9/10/20
//CS201
#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int n, c, k, space; // different variables to be used
    cout<<"\n\nEnter number of rows: "; //asking how many
    cin>>n;
    space = n - 1;

    if (n <= 0) // checks if valid number
    {
        cout << "This is an invalid input.";
    }
    for (k = 1; k<=n; k++) // this loop will build the top half of the diamond
    {
        for (c = 1; c<=space; c++) // this will create the space
            cout<<" ";

        space--;

        for (c = 1; c<= 2*k-1; c++) // this will print the actual diamond
            cout<<"#";

        cout<<"\n";
    }

    space = 1;

    for (k = 1; k<= n - 1; k++) // this is the opposite part of the diamond
    {
        for (c = 1; c<= space; c++) // same program as above just reversed
            cout<<" ";

        space++;

        for (c = 1 ; c<= 2*(n-k)-1; c++)
            cout<<"#";

        cout<<"\n";
    }
    return 0;
}
 