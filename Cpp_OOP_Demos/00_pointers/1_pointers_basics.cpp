//
// Created by veil on 3/7/26.
//

#include <iostream>
int func00_01() {
    //******** Stack ********
    /*
    Stack
    -Stores local variables and function calls
    -Memory is automatically managed
    -Very fast
    */
    int x  = 42;
    int *p = &x;

    std::cout << "p:" << p << "\n";
    std::cout << "*p:" << *p << "\n";
    /*
        p:0x7ffda3ea126c
        *p:42
    */

    //******** Heap ********
    /*
    Heap
    -Stores dynamically allocated memory using new
    -You must manually manage it (delete)
    -Slower but flexible
    */

    int *heap_pointer = new int(10);
    std::cout << "heap pointer addr: " << heap_pointer << "\n";
    std::cout << "heap pointer value: "<< *heap_pointer << "\n";

    return 0;
}



/********* exercises: **********************/
//Change Variable via Pointer
//Change a to 20 using pointer
int exe_func_00_01() {
    int a  = 5;
    int *p = &a;
    *p = 20;
    std::cout << "a after change: " << a << "\n";
    return 0;
}


