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
            cout<<"The numbers subtracted are: "<<setprecision(2)<<fixed<<subtract(num1,num2)<<endl;
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
