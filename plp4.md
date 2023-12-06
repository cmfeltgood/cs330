PLP 4: Conditionals, Switch Statements, and Short Circuiting

Conditionals

These use the same exact format as Java, i.e.:
```
double christineGay = 1.6;
double stephanieGay = 1.2;
if (b > a){ //same syntax as java
    cout << b << "\n";
}
else if (a > b){cout << a << "\n";} //else if, not elif
else {cout << "AAAAAAA" << "\n";}
```

with the same operators as most coding languages, and `&&` and `||` for and and or (<,>,==,!=,etc.,&&,||)

Switch Statements

Switch statements compare one value to find things it might possibly be equal to.
This works similarly to an if-else chain, but more condensed in a way that makes more sense.
```
string gf = "Alex";
switch(gf) {
    case "Stephanie":
        cout << "once again i am not dating steph";
        break;
    case "Kiersten":
        cout << "not dating steph's partner, either";
        break;
    case "Alex": //use of colon is odd
        cout << "I am dating Alex!"; //yes it does
        break; //break to stop checking of other cases
    case "Myself":
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
ind = 0;
gayCount = 0;
do{
    if (peopleIsGay[ind]){
        gayCount ++;
        cout << people[ind] << "\n";
    }
    ind ++;
} while (ind < sizeof(peopleIsGay)/sizeof(bool));
cout << gayCount << "\n\n";
```
This acts as essentially a flipped while loop. 
It functions the same as the loop above, however, the conditional goes after the action performed.
This is much less commonly used compared to the while loop above, but some programmers like it.


For Loops:
```
gayCount = 0;
for (int i = 0; i < sizeof(peopleIsGay)/sizeof(bool);i++){
    if (peopleIsGay[i]){
        cout << people[i] << "\n";
        gayCount ++;
    }
}
cout << gayCount << "\n\n"; //4
```
In this case, this for loop does the same actions as the while loops above, but instead of defining our own index tracker, it gets built into the loop declaration.

This for loop consists of 3 statements:

1: `int i = 0` : Runs at the start of the loop, usually declaring a dummy variable to track

2: `i < sizeof(peopleIsGay)/sizeof(bool)` : Functions as the conditional in the while loop, exiting the for loop when the condition is not met.

3: `i++` : Action to perform at the end of each loop cycle. `i++` is very common when walking up some list or doing some fancy counting.

This helps keep track of everything in one line instead of seperately.

For Loops with Lists:
```
gayCount = 0;
for (bool statement : peopleIsGay){
    if (statement){
        gayCount ++;
    }
}
cout << gayCount << "\n\n"; //4
```
This for loop simply goes through each item in our `peopleIsGay` list.
Since we're not keeping track of a dummy variable here, we can't compare to our other list to output names, but when only one list is walked through at a time, this is a good way to do that in a more condensed form, by directly working with each item in the list.
