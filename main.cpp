/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*author : Bridget Naylor
*/

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
    int num = 666;
    int& error = num;
    
    int *ptrX;//* = thing point to by 
    ptrX = &x;//& = address of
    int valueX;
    valueX = *ptrX;//* = thing pointer to by
    
    int *ptrY;//* = thing point to by 
    ptrY = &y;//& = address of
    int valueY;
    valueY = *ptrY;//* = thing pointer to by
    
    int *ptrZ;//* = thing point to by 
    ptrZ = &z;//& = address of
    int valueZ;
    valueZ = *ptrZ;//* = thing pointer to by
    
    if ( larger(valueX, valueY) == valueY && larger(valueZ, valueY) == valueY)
    {
        return y;
    }
    else if ( larger(valueX, valueY) == valueX && larger(valueZ, valueX) == valueX )
    {
        return x;
    }
    else if ( larger(valueX, valueZ) == valueZ && larger(valueZ, valueY) == valueZ)
    {
        return z;
    }
    return error;//Error
    
}

int main()
{
    int A = 222;
    int B = 1111;
    int C = 0;
    
    int& a = A;
    int& b = B;
    int& c = C;

    
    cout<<larger( a, c )<<endl;

    cout<<largest( a, b, c )<<endl;
    


    return 0;
}


