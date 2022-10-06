//Huan Chen Assignment07-Program01
#include<iostream>
#include<iomanip>
using namespace std;
int choice;
float num1, num2;

void displayMenu(){
    cout<<"Math Program:"<<endl;
    cout<<"1. Add two numbers"<<endl;
    cout<<"2. Subtract two numbers"<<endl;
    cout<<"3. Multiply two numbers"<<endl;
    cout<<"4. Divide two numbers"<<endl;
    cout<<"5. Quit"<<endl;
}

float add(float num1, float num2){
    return num1+num2;
}

float subtract(float num1, float num2){
    return num1-num2;
}

float multiply(float num1, float num2){
    return num1*num2;
}

float divide(float num1, float num2){
    return num1/num2;
}

int main(){
    displayMenu();
    cout<< "Choose a number between 1 - 5."<<endl;
    cin>>choice;
    if(choice > 5){
        cout<<"Please enter a number between 1 - 5."<<endl;
        cout<<"rerun the program."<<endl;
        return 0;
    
    }
    switch(choice){
        case 0:
            cout<< "You must choose between 1 and 5."<<endl;
            return 0;
        case 1:
            cout<< "Enter two numbers you want to add: "<<endl;
            cin>>num1>>num2;
            cout<<"The numbers added are: "<<setprecision(2)<<fixed<<add(num1,num2)<<endl;
            cout<<"                        "<<endl;
            displayMenu();
        case 2:
            cout<< "Enter two numbers you want to subtract: "<<endl;
            cin>>num1>>num2;
            cout<<"The numbers subtracted are: "<<setprecision(2)<<fixed<<subtract(num1,num2)<<endl;ret
            cout<<"                        "<<endl;
            displayMenu();
        case 3:
            cout<< "Enter two numbers you want to multiply: "<<endl;
            cin>>num1>>num2;
            cout<<"The numbers multiplied are: "<<setprecision(2)<<fixed<<multiply(num1,num2)<<endl;
            cout<<"                        "<<endl;
            displayMenu();
        case 4:
            cout<< "Enter two numbers you want to divide: "<<endl;
            cin>>num1>>num2;
            cout<<"The numbers divided are: "<<setprecision(2)<<fixed<<divide(num1,num2)<<endl;
            cout<<"                        "<<endl;
            displayMenu();
        case 5:
            cout<<"Thanks for using the program!"<<endl;;
            return 0;
    }
}

//Program #1:
//Write a program that uses a function displayMenu to display the following menu:
//Math Program:
//1. Add two numbers
//2. Subtract two numbers 3. Multiply two numbers 4. Divide two numbers 5. Quit
//When the user selects one of the options, the program will prompt them to input two numbers. It will then pass these numbers to a function, which will do the calculation and return the desired result.
//• There should be one function for each of the four non-quit menu options. The program will then output the correct answer.
//• The function names should be named in a way that corresponds to their action (add, subtract, multiply, and divide).
//• All of these functions should accept two floating point numbers, and return a floating point number.
//• Display all results to 2 significant digits.
//• All input and output with the user should be done in the main function.
//1. The user is expected to input both numbers at the same time
//• The program should loop until the user selects option 5 (Quit), and should be notified if
//they do not pick an option between 1 and 5.
//
//Sample Output:
//Math Program:
//1. Add two numbers
//2. Subtract two numbers 3. Multiply two numbers 4. Divide two numbers 5. Quit
//Choice: 0
//You must choose between 1 and 5! Math Program:
//1. Add two numbers
//2. Subtract two numbers 3. Multiply two numbers 4. Divide two numbers 5. Quit
//Choice: 2
//Please enter two numbers: 4.5815 5.8481 The numbers subtracted are -1.27
//Math Program:
//1. Add two numbers
//2. Subtract two numbers 3. Multiply two numbers 4. Divide two numbers 5. Quit
//Choice: 3
//Please enter two numbers: 8 2 The numbers multiplied are 16.00 Math Program:
//1. Add two numbers
//2. Subtract two numbers 3. Multiply two numbers 4. Divide two numbers 5. Quit
//Choice: 5
//Thanks for using the program! Press any key to continue . . .
