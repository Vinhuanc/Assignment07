//Huan Chen Assignment07-Program03
#include<iostream>

using namespace std;

int num=45;

void repchar(){
    char a='*';
    for(int i=0; i<=num; i++){
        cout<<a;
        i++;
       
    }
}

void repchar(char a){
    for(int i=0; i<=num; i++){
        cout<<a;
        i++;
    }
}

void repchar(char a, int num){
    for(int i=0; i<=num; i++){
        cout<<a;
        i++;
    }
}

int main(){
    repchar();
    cout<<"          "<<endl;
    repchar('=');
    cout<<"          "<<endl;
    repchar('+',30);
    cout<<"          "<<endl;
}

//Program #3
//Create three defintions for an overloaded function repchar().
//• Call each of the repchar definitions as follows: 1. repchar();
//2. repchar('=');
//3. repchar('+', 30);
//• This program will be different from Program 2, as you will not use any default
//arguments, and will instead overload the function repchar three times. Sample Output:
//*********************************************
//=============================================
//++++++++++++++++++++++++++++++
//Press any key to continue . . .
