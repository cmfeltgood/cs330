#include <iostream>
#include <array> //needed for std::array<>
using namespace std;


void excitePointer(string in, string* p1, string* p2){
    *p1 = in + "!";
    *p2 = in + "!!!!!!!!!";
}


std::array<string,2> exciteArray(string in){ //needs #include <array>
    string light_excitement = in +"!";
    string heavy_excitement = in + "!!!!!!!!!!!!!";
    std::array<string,2> strArr;
    strArr = {light_excitement,heavy_excitement};
    return strArr;
}


class TwoStrings{
public:
    string str1;
    string str2;
};
TwoStrings exciteClass(string in){
    TwoStrings strs;
    strs.str1 = in + "!";
    strs.str2 = in + "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    return strs;
}



int main(){
    string hello = "hi";

    //method 1: pointers
    string a;
    string b;
    excitePointer(hello,&a,&b);
    cout << a << " ";
    cout << b << "\n\n";


    //method 2: array
    std::array<string,2> arrOut = exciteArray(hello);
    cout << arrOut[0]<< " " << arrOut[1] << "\n\n";


    //method 3: classes
    TwoStrings classOut = exciteClass(hello);
    cout << classOut.str1 << " " << classOut.str2;
}