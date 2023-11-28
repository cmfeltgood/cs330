//switch statement
#include <iostream>
using namespace std;

int main() {
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
    
}