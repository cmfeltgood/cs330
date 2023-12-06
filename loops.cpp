#include <iostream>
using namespace std;

int main(){
    string people[] = {"Christine","Alex","Stephanie","uhhh","my mother? last i checked?","Kiersten"};
    bool peopleIsGay[] = {true,true,true,false,false,true};

    //while loop
    int ind = 0;
    int gayCount = 0;
    while (ind < sizeof(peopleIsGay)/sizeof(bool)){
        if (peopleIsGay[ind]){
            gayCount ++;
            cout << people[ind] << "\n";
        }
        ind ++;
    }
    cout << gayCount << "\n\n"; //4


    //do-while
    ind = 0;
    gayCount = 0;
    do{
        if (peopleIsGay[ind]){
            gayCount ++;
            cout << people[ind] << "\n";
        }
        ind ++;
    } while (ind < sizeof(peopleIsGay)/sizeof(bool));
    cout << gayCount << "\n\n";


    gayCount = 0;
    //for loop
    for (int i = 0; i < sizeof(peopleIsGay)/sizeof(bool);i++){
        if (peopleIsGay[i]){
            cout << people[i] << "\n";
            gayCount ++;
        }
    }
    cout << gayCount << "\n\n"; //4


    //anotherfor loop
    gayCount = 0;
    for (bool statement : peopleIsGay){
        if (statement){
            gayCount ++;
        }
    }
    cout << gayCount << "\n\n"; //4
}