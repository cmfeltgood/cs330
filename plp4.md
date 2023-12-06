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

Loops

C++, outside of recursion, uses both while and for loops.
For demonstrative purposes, we have two lists, one of people's names, and another describing their homosexuality status.
```
string people[] = {"Christine","Alex","Stephanie","uhhh","my mother? last i checked?","Kiersten"};
bool peopleIsGay[] = {true,true,true,false,false,true};
```
We want to figure out how many of these people are gay, and list them out in the output. Here's four ways to do this.

While Loops:
```
//while loop
int ind = 0;
int gayCount = 0;
while (ind < sizeof(peopleIsGay)/sizeof(bool)){ //sizeof... gets number of items in list
    if (peopleIsGay[ind]){
        gayCount ++;
        cout << people[ind] << "\n";
    }
    ind ++;
}
cout << gayCount << "\n\n"; //4
```
While loops continually run for every iteration a conditional statement returns as true. 
It uses the exact same format as an `if` statement, with the word `while` replacing `if`.
In this case, the conditional is `ind < sizeof(peopleIsGay)/sizeof(bool)`.

(sidenote: `sizeof()` returns as the size of an object in bytes, so to get the number of items in our list, we need to take the size of the list divided by the size of a boolean)

Here, we want to exit the loop when we've gone through the full list, so we compare a variable to keep track of the index, `ind` with the size of the list, `sizeof...`.
Never forget to change `ind` within the while loop, to prevent it from going forever.

Do... While Loops:
```
```



For Loops:
```
```



For Loops with Lists:
```
```
