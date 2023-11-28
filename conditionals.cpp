#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 7;
    if (b > a){ //same syntax as java
        cout << b << "\n";
    }
    else if (a > b){cout << a << "\n";} //else if, not elif
    else {cout << "AAAAAAA" << "\n";}

    a = 9;

    if (b > a && 0 == 0){ //same syntax as java, && for and, || for or
        cout << b << "\n";
    }
    else if (a > b){cout << a << "\n";} //else if, not elif
    else {cout << "AAAAAAA" << "\n";}

    a = 7;

    if (b > a){ //same syntax as java
        cout << b << "\n";
    }
    else if (a > b){cout << a << "\n";} //else if, not elif
    else {cout << "AAAAAAA" << "\n";}

}