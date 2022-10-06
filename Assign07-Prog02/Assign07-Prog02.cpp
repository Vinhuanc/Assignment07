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
