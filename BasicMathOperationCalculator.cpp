#include <iostream>
using namespace std;

int main(){
    float num1, num2, numSol; //declares float vars for user-inputted terms (num1 and num2) and the solution (numSol)
    char mathOperation; //declares char var for user-inputted operator

    cout << "Enter the symbol of the operation you wish to carry out: ";
    cin >> mathOperation; //accepts user-inputted operator

    while (!(mathOperation == ('+' || '-' || '*' || '/'))){
        cout << "Please enter a valid mathematical operator: ";
        cin >> mathOperation;
    } //checks to see if the user input was a valid operator and doesn't let the user proceed until a valid one is inputted

    cout << "Enter the first number: ";
    cin >> num1; //accepts first user-inputted term

    cout << "Enter the second number: ";
    cin >> num2; //accepts second user-inputted term

    if (mathOperation == '+') numSol = num1 + num2;
    else if (mathOperation == '-') numSol = num1 - num2;
    else if (mathOperation == '*') numSol = num1 * num2;
    else if (mathOperation == '/') numSol = num1 / num2;
    //if statements run depending on which operator was inputted

    cout << "Your solution is: " << numSol; //outputs the solution

    return 0; //exits program
}

//weird bug where if you input a float int for the mathematical operator, the while loop runs 4 times?