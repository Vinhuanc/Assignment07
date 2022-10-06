//Huan Chen Assignment07-Program02
#include<iostream>

using namespace std;
int n;
char ch;

void repchar(char ch= '*', int n=45){
    for(int i =0;i <=n; i++){
        cout<< ch;
        i++;
       
    }
}

int main(){
    repchar();
    cout<<"          "<<"\n";
    repchar('=');
    cout<<"          "<<"\n";
    repchar('+', 30);
    cout<<"          "<<"\n";
}


//Program #2
//Create a function repchar(char ch, int n) that has two default arguments.
//• You can define the default arguments in either the function prototype or the function definition (if you do not use a prototype for your function)
//• The function will display the character in ch, n number of times. Use ‘*’ as the default argument for ch and 45 as the default argument for n.
//• Call repchar three times in the main function as follows:
//1. With no arguments
//2. ‘=’ as the single argument
//3. ‘+’ and 30 as the arguments
//• Do not print anything else from your function.
//Sample Output:
//*********************************************
//=============================================
//++++++++++++++++++++++++++++++
//Press any key to continue . . .
