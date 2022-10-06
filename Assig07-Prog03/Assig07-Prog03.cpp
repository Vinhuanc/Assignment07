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

