//
// Don't modify code in this file, with the exception
// of adding test cases.
//
#include <iostream>
#include <fstream>
#include "apex_code.h"

using namespace std;

// Use for everything other than doubles/floats
template<typename T> bool test(T expected, T result)
{
    if(expected != result)
    {
        cout << "FAILED: Expected " << expected << ", received " << result << ".\n";
    }
    else {
        cout << "PASS\n";
    }

    return expected == result;
}

int main()
{
    // To add a test case, duplicate one of the test lines below
    // modify input with the first string, and the expected output
    // in the second string.

    // Test upperCharAnd
    (void)test(true, isPrime(7));
    (void)test(true, isPrime(2));
    (void)test(false, isPrime(1));
    (void)test(false, isPrime(-10));
    (void)test(false, isPrime(16));
    (void)test(true, isPrime(997));

    return 0;
}
