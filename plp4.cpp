// loops and functions

#include <iostream>
#include <cstring>
using namespace std;

int sampleFunction(int, int);
int recursiveFunction(int, int);
int variableFunction();
void passbyreferenceFunc(int &);

int main()
{
    int functionNum1 = 10, functionNum2 = 10, functionExample;
    int recursiveFunctionNum1, recursiveFunctionNum2, rf;
    string strFunction, returnstrFunction;
    int variableFunc1, variableFunc2;

    cout<<"Demo different types of loops with the same end result to show versatility.\n";
    
    const int NUM = 10;
    int i = 0, sum = 0, total = 0;
    int iarr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout<<"### Number counter using while loop ###\n";
    // while loop
    while(i <= NUM)
    {
        sum = i + NUM;
        cout<<i<<" + "<<NUM<<" = "<<sum<<endl;
        total += sum;
        i++;
    }
    cout<<"Total: "<<total<<endl;
    cout<<endl;
    
    // resetting i, sum and total for next demo
    i = 0, total = 0, sum = 0;
    cout<<"### Number counter using do-while loop ###\n";
    // do while loop
    do
    {
        sum = i + NUM;
        cout<<i<<" + "<<NUM<<" = "<<sum<<endl;
        total += sum;
        i++;

    } while (i <= NUM);
    cout<<"Total: "<<total<<endl;
    cout<<endl;

    // resetting sum and total for next demo
    total = 0, sum = 0;
    cout<<"### Number counter using for loop ###\n";
    // for loop
    for (int i = 0; i <= NUM; i++){
        sum = i + NUM;
        cout<<i<<" + "<<NUM<<" = "<<sum<<endl;
        total += sum;
    }
    cout<<"Total: "<<total<<endl;
    cout<<endl;
    
    // resetting i, sum and total for next demo
    i = 0, total = 0, sum = 0;
    cout<<"### Number counter using for each loop ###\n";
    // for each loop
    for (int i : iarr){
        sum = i + NUM;
        cout<<i<<" + "<<NUM<<" = "<<sum<<endl;
        total += sum;
    }
    cout<<"Total: "<<total<<endl;
    cout<<endl;

    functionExample = sampleFunction(functionNum1, functionNum2);
    cout<<"After passing two numbers into a function, the returned value is: "<<functionExample<<endl;
    cout<<endl;

    // recrusive function
    cout<<"### Recursive fucntion example ###\n";
    cout<<"Enter a number greater than 0: ";
    cin>>recursiveFunctionNum1;
    cout<<"Enter a power to raise the number to: ";
    cin>>recursiveFunctionNum2;
    rf = recursiveFunction(recursiveFunctionNum1, recursiveFunctionNum2);
    cout<<recursiveFunctionNum1<<"^"<<recursiveFunctionNum2<<" is "<<rf<<endl;
    cout<<endl;
    
    cout<<"### Saving return value of a function in a variable ###\n";
    variableFunc1 = variableFunction();
    cout<<"This function returned "<<variableFunc1<<endl;
    cout<<endl;

    cout<<"### All the previous functions have been pass-by-value. Let's look at a function using pass-by-reference ###\n";
    passbyreferenceFunc(variableFunc1);
    cout<<variableFunc1<<endl;

    return 0;
}

int sampleFunction(int num1, int num2)
{
    return num1 * num2;
}

int recursiveFunction(int num, int power)
{
    if (power == 0){
        return 1;
    }
    else{
        return (recursiveFunction(num, power - 1)) * num;
    }
}

int variableFunction()
{
    return 5;
}

void passbyreferenceFunc(int &num)
{
    num += 10;
}