/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int larger( int first, int second)
{
    int difference = first - second;
    if ( difference < 0 )
    {
        return second;
    } 
    else
    {
        return first;
    }
}

int& largest(int& x, int& y, int& z)
{
    
    return ;
}

int main()
{
    int A = 2;
    int B = 9;
    int C = 11;
    // int * aP = &A;
    // int * bP = &B;
    // int * cP = &C;
    
    int& a = A;
    int& b = B;
    int& c = C;
    
    
    cout<<larger( 2, 10 )<<endl;

    cout<<largest( a, b, c )<<endl;
    


    return 0;
}

