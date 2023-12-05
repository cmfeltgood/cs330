PLP 4: Conditionals, Switch Statements, and Short Circuiting

Conditionals

These use the same exact format as Java, i.e.:
```
int a = 5;
int b = 7;
if (b > a){ //same syntax as java
    cout << b << "\n";
}
else if (a > b){cout << a << "\n";} //else if, not elif
else {cout << "AAAAAAA" << "\n";}
```

with the same operators as Java uses (<,>,==,!=,etc.,&&,||)

Switch Statements

Switch statements compare one value to find things it might possibly be equal to.
This works similarly to an if-else chain, but more condensed in a way that makes more sense.
```
int a = 4;
switch(a) {
    case 1:
        cout << "this should not work";
        break;
    case 2:
        cout << "neither should this";
        break;
    case 4: //use of colon is odd
        cout << "but this should come out"; //yes it does
        break; //break to stop checking of other cases
    case 5:
        cout << "this code won't even be reached";
}
```
Notably, we use colons here, which is odd for C++, but it works in this specific instance.

Short Circuit

As shown in the short circuit code, C++ does use short circuiting. If it didn't, the following code would cause a crash:
```
int a = 0;
if (a != 0 && 10/a < 5){
    cout << "why";
}
else {
    cout << "We didn't crash!";
}
```
