//short circuit testing

#include <iostream>
using namespace std;

int main(){
    int a = 0;

    if (a != 0 && 10/a < 5){
        cout << "why";
    }
    else {
        cout << "We didn't crash!";
    }

    //prints "We didn't crash!"
}