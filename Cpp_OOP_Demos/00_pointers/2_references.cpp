//
// Created by veil on 3/8/26.
//
#include <iostream>

int func_00_02_01() {
    int x  = 200;
    int &r = x;
    std::cout << "r value: " << r << "\n";
/*
r and x refer to the SAME memory
Memory conceptually:

Address      Value
0x100        10
             ↑
           x , r
*/

    return 0;
}



/*
Why References Exist
Function parameters
Without reference:
void change(int x)
{
    x = 20;
}
Original variable NOT changed
With reference:
void change(int& x)
{
    x = 20;
}
Now the original variable changes.

*/