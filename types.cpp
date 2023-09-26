//for printing
#include <iostream>
#include <map> // required for maps (dicts)
using namespace std;
 
// Main() function: where the execution of
// program begins
int main()
{
    //variable assignments
    int num = 4; // integer
    string hi = "hello!" ; //string
    float fancyNum = 3.14; //float appr. pi
    bool amIGay = true; //boolean to show my gay level is yes


    // Prints statements
    cout << num;
    cout << hi;
    cout << fancyNum;
    cout << amIGay; //prints as 1 okkkk
    cout << false; //prints as 0 okkkk
    //note that this doesn't automatically go to new line

    //mixed var. testing
    cout << num + fancyNum; //adds to float
    cout << hi + " World! \n heck"; //correctly adds as expected
    cout << num + amIGay; //ADDS 1 TO 4 WHAT THE HECK
    cout << num / 3; //stays int
    cout << fancyNum/num; //stays float
    cout << (float)num; //float, but doesn't display "."
    cout << (int)fancyNum; //displays "3"
    //conversions must be done explicitly


    //arrays!
    int favNums[5] = {24, 48, 16, 2, 3};
    cout << favNums; //prints a location in memory
    favNums[2] = 100; //must be within array, must be same type


    //dict! (map)
    map<string, int> gayPercent;
    gayPercent.insert(pair<string, int>("Alex",120));
    gayPercent.insert(pair<string, int>("Christine",170));
    cout << gayPercent["Christine"] + "%"; // prints 170!

    return 0;
}