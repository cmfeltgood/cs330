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


Option 1: Pass-by-pointer
```
void excitePointer(string in, string* p1, string* p2){
    *p1 = in + "!";
    *p2 = in + "!!!!!!!!!";
}
```
```
string hello = "hi";

//method 1: pointers
string a;
string b;
excitePointer(hello,&a,&b);
cout << a << " ";
cout << b << "\n\n";
```
So, what is a pointer?

A pointer is a variable type in C++ that references where a variable is located. 
The type is signified using a `*` after the normal variable type, like in `string* p1` in the function definition.
To get the pointer of a current variable, you use an `&` before the variable name, like `&a` used when calling the function.
Then, in the function, the `*` used before the pointer name signifies that we want to change the thing 
that is being pointed at: the string itself. 
This then indirectly changes `a` and `b`.

