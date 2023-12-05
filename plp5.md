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
