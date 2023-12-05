PLP 3: Functions

Functions in C++ are defined similarly to in Java. 
The general format is:
```
returnType functionName(inputType inputName, otherType otherName) {code;}
```
Here's an example:
```
double mult(double a, double b) { //must be declared before function call
    return a*b;
}
```
```
double num1 = mult(1,3);
cout << num1 << "\n";
```
Recursion is also possible in C++, like in this code for a factorial:
```
int factorial(int a) {
    if (a==1) {
        return 1;
    }
    else {
        return factorial(a-1)*a;
    }
}
```
To return a single value from the function:
```
return (variable)
```
However, if you want to return multiple value from a function, it may require something more complex, 
especially when returning values of different variable types.
