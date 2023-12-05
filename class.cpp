#include <iostream>
using namespace std;

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



int main(){
    Counter ct1;

    cout << ct1.getValue() << "\n";
    ct1.inc();
    cout << ct1.getValue() << "\n\n";


    Counter ct2(10);
    cout << ct2.getValue() << "\n\n";


    ComplexCounter cct(10);
    cout << cct.getValue() << "\n";
    cct.inc();
    cout << cct.getValue() << "\n";
    cct.dec();
    cout << cct.getValue() << "\n";



}