# cppds-functions
##Abstract 
The code demonstrates how function overloading allows you to create multiple functions with the same name but different parameter types, and how type casting can be used to ensure consistent data types for arithmetic operations.

##Algorithm
1. Define three "add" functions:
    - `int add(int a, int b)` adds two integers and returns an integer.
    - `float add(int a, float f)` adds an integer and a float after type casting the integer to a float and returns a float.
    - `float add(float x, float y)` adds two floats and returns a float.

2. In the `main` function:
    a. Initialize integer variables `i`, `j`, and a variable `k`.
    b. Initialize float variables `f1` and `f2`.
    c. Calculate the sum of `i` and `j` using the `add` function and store it in `k`.
    d. Print the value of `k`.
    e. Calculate the sum of `f1` and `f2` using the `add` function and print the result directly.
