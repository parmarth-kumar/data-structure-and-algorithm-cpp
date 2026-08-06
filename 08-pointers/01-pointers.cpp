#include <iostream>

int main()
{
    int x { 5 };    // normal variable
    int& ref { x }; // a reference to an integer (bound to x)

    int* ptr = &ref;  // a pointer to an integer, initialized to the address of ref (which is the same as the address of x)


    // [direct value access]
    // outputs the value of x (5) and ref (5) since ref is an alias for x
    std::cout << "x    = " << x << " [direct value]\n";
    std::cout << "ref  = " << ref << " [reference]\n";


    // [address access]
    // outputs the address of x and ref, which are the same since ref is just another name for x
    std::cout << "&x   = " << &x << " [address of x]\n";
    std::cout << "&ref = " << &ref << " [address of ref]\n";

    // [Error]
    // operand of * must be a pointer, but ref is a reference (not a pointer), so this will cause a compilation error
    // std::cout << "*ref = " << *ref << '\n';

    // [address access]
    // outputs the address stored in ptr (which is the address of x/ref) 
    // undefined behavior if ptr was not initialized, but since it points to x, it will output the address of x
    std::cout << "ptr  = " << ptr << " [address of ptr]\n";

    // [address access]
    // the address of the pointer variable itself
    std::cout << "&ptr = " << &ptr << " [address of ptr]\n";

    // [dereferencing]
    // outputs the value at the address stored in ptr (which is the value of x, 5)
    // undefined behavior if ptr was not initialized, but since it points to x, it will output 5
    std::cout << "*ptr = " << *ptr << " [dereferenced value]\n";

    return 0;
}