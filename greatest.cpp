//Clayton Arndt
// HW1
//9/10/20
//CS201

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
    cout<<"Enter a sequence of positive numbers";
    cout<<endl;

    int v=0, LN=0;// v is the values entered by the user LN will be the largest number at the end

    cout<<"Enter a positive number(0 or negative to end):";
    cin>>v;

    while(v>0){ // as long as it is above 0 program continues
        if(v>LN)
            LN=v;
        cout<<"Enter a positive number(0 or negative to end):";
        cin>>v;
    }//end while loop

    cout<<"Largest number is: "<<LN<<'\n'<<endl; //after the while loop the LN is displayed here


    return 0;
}
