### Data Types!

All variables must be decalred as their type on creation. Examples for the more basic types:
```
int num = 4;          //integer
string hi = "hello!" ; //string
float fancyNum = 3.14; //float appr. pi
bool amIGay = true;    //boolean to show my gay level is yes
```

Most of these variables print as one would expect. "cout" automatically changes types to be printed as strings. 

Adding ints to floats returns a float, strings add together as expected, dividing an int by an int returns an int, while getting a float involved with division returns a float.

The variable type of the float fancyNum can't be changed, but it can be converted into another variable as an int, like so;

`newNum = (int)fancyNum`

The one exception to what would seem normal is a boolean.

```
cout << true; // outputs 1
cout << false; // outputs 0
```

These numbers also work with arithmetic. num + amIGay, for instance, outputs as 5, since amIGay is true (obviously), and true is 1


Arrays work similarly to java, where it can be defined as multiple variables under one set. these have to be of the same type, and the amount of variables must be consistent. It looks like this:

`int favNums[3] = {24, 48, 16}`

Maps are C++'s version of dicts, and they don't come automatically, they have to be included with `#include <iostream>`
```
map<string, int> gayPercent;
gayPercent.insert(pair<string, int>("Alex",120));
gayPercent.insert(pair<string, int>("Christine",170));
cout << gayPercent["Christine"] + "%"; // prints 170!
```
The programmer must define the pair of types used. For this, strings are keys to ints. Pair must then be inserted one by one, as shown above.

Once arrays and maps are defined, they work the same as with python, being called using "[]", as shown in the map example.
