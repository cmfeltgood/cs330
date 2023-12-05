PLP 5: Classes and Objects

The Basics

Here's an example of a simple class, and how its objects are declared and used.
```
class Counter{
protected:
    int value;
public:
    Counter(){
        value = 0;
    }

    Counter(int start){
        value = start;
    }

    void inc(){
        value ++;
    }

    int getValue(){
        return value;
    }
};
```
```
Counter ct1;

cout << ct1.getValue() << "\n";
ct1.inc();
cout << ct1.getValue() << "\n\n";

Counter ct2(10);
cout << ct2.getValue() << "\n\n";
```

Let's take this apart a little bit.

The class is defined starting with a header, like `class (ClassName){};`.
Generally, programmers use a capitalized class name, following converntions in other languages.
Also notably, there's a semicolon after the brackets, unlike most `{}` separators.

The class is then divided into its private, protected, and public attributes and methods.
In this case, `value` is a protected attribute, and all methods are public.

Constructor methods are optional in C++, using default values for attributes if they are not defined.
For instance, if I didn't define any contructors, `value` would just be 0.
However, I did define two different constructors, for two input cases:
```
Counter(){
    value = 0;
}

Counter(int start){
    value = start;
}
```
These allow for different object declarations, done like so:
```
Counter ct1;
Counter ct2(10);
```
Constructor inputs are given in parantheses after the object name.

Inheritance

C++ supports inheritance, like:
```
class ComplexCounter: public Counter{
public:

    ComplexCounter(){
        value = 0;
    }

    ComplexCounter(int start){
        value = start;
    }

    void dec(){
        value -= 1;
    }

};
```
```
ComplexCounter cct(10);
cout << cct.getValue() << "\n";
cct.inc();
cout << cct.getValue() << "\n";
cct.dec();
cout << cct.getValue() << "\n";
```
The use of `:public Counter` gives the complex counter all attributes and methods of counter, although since we use custom contructors, those need to be redefined.

C++ also supports inheritance from multiple classes, like in this example from https://www.w3schools.com/cpp/cpp_inheritance_multiple.asp:
```
class MyChildClass: public MyClass, public MyOtherClass {};
```
