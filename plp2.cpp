#include <iostream>
// for strings
#include <string>
// for map class 
#include <map>
using namespace std;

int main() {
    // variable declarations
    // integer data type, you can also have a long int for larger numbers
    int myInt = 88, testInt = 6;
    // string data type - in order to use, you must include the <string> header file at the beginning of your code
    string myString = "Hello World!", anotherString = "5" + to_string(testInt);
    // float data type. double data type exists for larger numbers
    float myFloat = 5.56;
    // boolean value to be set to true or false
    bool myBoolean = true;
    // const integer to be utilzied for the array
    const int SIZE = 5;
    // array with a size declaration using the const int variable
    int myArray[SIZE] = {55, 153, 63, 0, 74};
    // when you initialize a pointer, always set it to point to null
    int *ptr = nullptr;
    // storing the memory address of the array to the pointer
    ptr = myArray;
    // map data type (similar to a dictionary in python)
    map<int, string> students = { {1, "Bob"}, {2, "Sue"}, {3, "John"}, {4, "Alice"}};

    cout<<anotherString<<endl;

    // can add ints and floats. result is a float (widening conversion)
    cout<<(myFloat + myInt)<<endl;
    cout<<(myInt + myFloat)<<endl;
    
    // type casting examples
    int tcInt = 55;
    double dInt;
    dInt = (double)tcInt; 
    cout<<dInt<<endl;

    float tcFloat = 8.89;
    double anotherDInt;
    anotherDInt = (double)tcFloat;
    cout<<anotherDInt<<endl;

    return 0;
}