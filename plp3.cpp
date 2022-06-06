/* 
• a one-condition if/else statement (i.e. "if x == true")
• a multi-condition if/else statement (i.e. "if x>0 && y< 10)
• if/elif/else statements
• short-circuit logic
• a switch-case statement 
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int userNum, guessNum, guessNum2, userFood;
    bool exampleBool1 = true, exampleBool2 = true;

    // simple if/else statement
    cout<<"###### If/else statement ######\n";
    cout<<"Enter 1 to be in the if statement or any other number to be in the else statment: ";
    cin>>userNum;
    if (userNum == 1){
        cout<<"Hello from inside the if statement!\n";
    }
    else {
        cout<<"Hello from inside the else statement!\n";
    }
    
    // multi-condition if/selse statement
    cout<<"###### Multi-condition if/else statement ######\n";
    cout<<"Enter a number between 1 and 5: ";
    cin>>guessNum;
    if (guessNum > 1 && guessNum <= 5){
        cout<<"Great, you followed directions!\n";
    }
    else {
        cout<<"You failed at following the directions.\n";
    }
    
    // multi-condition if/selse statement using if/elif/else statements
    cout<<"###### Multi-condition + if/elif/else ######\n";
    cout<<"Now we will use a multi condition if/else statement expanding on the previous if/else statement. "
        "This will help us understand the power of combining mulit-conditions and if/elif/else.\n"
        "Enter a number between 1 and 5: ";
    cin>>guessNum2;
    if (guessNum2 > 1 && guessNum2 <= 5){
        cout<<"Great, you followed directions!\n";
    }
    else if (guessNum2 < 1 || guessNum2 > 5) {
        cout<<"You failed at following the directions.\n";
    }
    else{
        cout<<"Can you even read, bro?\n";
    }

    // short circuit logic
    cout<<"###### Short-circuit logic ######\n";
    if (exampleBool1 == true && exampleBool2 == true){
        cout<<"AND logic means that both statments have to be evaulated to TRUE for it to be TRUE.\n";
    }   
    exampleBool2 = false;
    if (exampleBool2 == false || exampleBool1 == false){
        cout<<"OR logic only needs one statement to equal TRUE in order to execute. "
        "Since the first statmenet is TRUE, there is no need to evaluate the second statement.\n";
    }

    // switch case statement
    cout<<"###### Switch-case ######\n";
    cout<<"Choose your favorite from the following choices and enter the associated number (1.pizza, 2.pasta, 3.brownies, 4.salad): ";
    cin>>userFood;
    
    switch (userFood){
        case 1:
            cout<<"Pizza is a great choice!\n";
            break;
        case 2:
            cout<<"Pasta is a great choice!\n";
            break;
        case 3:
            cout<<"Brownies are a great choice!\n";
            break;
        case 4:
            cout<<"Ok weirdo.\n";
            break;
    }
    return 0;
}