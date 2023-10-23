#include <iostream>
using namespace std;

int add(int a, int b)
{
    cout << "add with two ints called" << endl;
    return (a+b);
}

float add(float a, float f)
{
    cout << "add with two floats called" << endl;
    return ((float)a+f);             //TYPE CASTING : where we are converting a into a floating point number and then added to f
}

float add(int x, float y)
{
    return(x+y);
}

main()
{
    int i= 4, j=7,k;
    float f1 = 3.5, f2 = 7.9;
    cout << "integers are: " << i << " , " << j <<endl;
    k = add(i,j);
    cout << k << endl;
    cout << "float values are: " << f1 << " , " << f2 <<endl;
    cout << add(f1,f2);
}
