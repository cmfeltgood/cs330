PLP 3: Functions

Functions in C++ are defined similarly to in Java. 
The general format is:
```
returnType functionName(inputType inputName, otherType otherName) {code;}
```
Here's an example:
```
double modifyGay(double gayPc, double mult) { //must be declared before function call
    return gayPc*mult;
}
```
Functions then get called using `fName(inputs)` as such:
```
double christineGay = 0.5
double christineGayWhenAlex = modifyGay(christineGay,10);
cout << num1 << "\n";
```
Recursion is also possible in C++, like in this code for a factorial:
```
int factorial(int a) { //couldn't think of anything creative here :(
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
Here's three versions of a function that describes my differing levels of excitement around Alex versus with other people.


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

This method may seem clunky, but it's the most universal way to handle outputs of multiple variable types. The other options have their own issues.

Option 2: std::array<>
```
std::array<string,2> exciteArray(string in){ //needs #include <array>
    string light_excitement = in +"!";
    string heavy_excitement = in + "!!!!!!!!!!!!!";
    std::array<string,2> strArr;
    strArr = {light_excitement,heavy_excitement};
    return strArr;
}
```
```
std::array<string,2> arrOut = exciteArray(hello);
cout << arrOut[0]<< " " << arrOut[1] << "\n\n";
```
(note that this requires `#include <array>` at the start of the file)

This makes use of the C++ array object, where its start point and references must be used. 
This is clunky, and requires the output to also be `std::array<string,2>` but it works when outputting the same variable type.

Option 3: Build-a-class
```
class TwoStrings{
public:
    string str1;
    string str2;
};
```
```
TwoStrings exciteClass(string in){
    TwoStrings strs;
    strs.str1 = in + "!";
    strs.str2 = in + "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    return strs;
}
```
```
TwoStrings classOut = exciteClass(hello);
cout << classOut.str1 << " " << classOut.str2;
```
While I haven't gone over classes and objects yet (in order of PLP), the gist is that you build your own class, with whatever attributes you want to return, put local variables into an object of that class, and return that.
This method is extra writing, but if you don't want to deal with pointers, this can work in certain circumstances.
