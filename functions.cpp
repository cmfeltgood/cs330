#include <iostream>
using namespace std;

double mult(double a, double b) { //must be declared before function call
    return a*b;
}

int factorial(int a) {
    if (a==1) {
        return 1;
    }
    else {
        return factorial(a-1)*a;
    }
}

string split(string s){
    
}

int main() {
    double num1 = mult(1,3);
    cout << num1 << "\n";

    int num2 = factorial(5);
    cout << num2 << "\n";
}


