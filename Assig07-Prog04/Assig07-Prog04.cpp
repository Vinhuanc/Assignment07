//Huan Chen Assignment07-Program04
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int score1, score2, score3, score4, score5, total, minNum;
int value1,value2, value3, value4, value5, avg;

void getScore(int &score1, int &score2, int &score3, int &score4, int &score5){
    cout<<"enter a test score: ";
    cin>>score1;
    if(score1>100 || score1<0){
        cout<<"Enter a test score between 0 and 100: ";
        cin>>score1;
    }
    
    cout<<"enter a test score: ";
    cin>>score2;
    if(score2>100 || score2<0){
        cout<<"Enter a test score between 0 and 100: ";
        cin>>score2;
    }
    
    cout<<"enter a test score: ";
    cin>>score3;
    if(score3>100 || score3<0){
        cout<<"Enter a test score between 0 and 100: ";
        cin>>score3;
    }
    
    cout<<"enter a test score: ";
    cin>>score4;
    if(score4>100 || score4<0){
        cout<<"Enter a test score between 0 and 100: ";
        cin>>score4;
    }
    
    cout<<"enter a test score: ";
    cin>>score5;
    if(score5>100 || score5<0){
        cout<<"Enter a test score between 0 and 100: ";
        cin>>score5;
    }
    
    total = score1 + score2 + score3 + score4 + score5;
}

int findLowest(int &score1, int &score2, int &score3, int &score4, int &score5){
    int minNum = min({score1, score2, score3, score4, score5});
    return minNum;
}

void calcAverage(){
    avg = (total-findLowest(value1, value2, value3, value4, value5))/4;
    cout<<"After dropping the lowest score, the test average is "<<avg;
}

int main(){
    getScore(value1, value2, value3, value4, value5);
    calcAverage();
    cout<<"  "<<endl;
}

//Program #4
//Write a program that calculates the average of a group of test scores, where the lowest score in the group is dropped. It should use the following functions:
//- Void getScore() should ask the user for a test score, store it in a reference parameter variable, and validate it. This function should be called by main once for each of the five scores to be entered.
//- Void calcAverage() should calculate and display the average of the four highest scores. This function should be called just once by main and should be passed the five scores.
//- Int findLowest() should find and return the lowest of the five scores passed to it. It should be called by calcAverage, which uses the function to determine which of the five scores to drop.
//• The main function should define five variables, call getScore for each variable, call calcAverage passing all five variables, and exit
//• calcAverage should call findLowest
//• findLowest should return the value of the score to be dropped
//o You can then use this information to adjust the total score before averaging
//• Do not accept scores lower than 0 or higher than 100
//o Loop until the user complies
//• Display the average to 3 significant digits
//Sample Outputs:
//Enter a test score: 81
//Enter a test score: 95
//Enter a test score: 73
//Enter a test score: 88
//Enter a test score: 94
//After dropping the lowest score, the test average is 89
//Press any key to continue . . .
//Enter a test score: -151
//Enter a test score between 0 and 100: 51
//Enter a test score: 151
//Enter a test score between 0 and 100: 54
//Enter a test score: 65
//Enter a test score: 35
//Enter a test score: 75
//After dropping the lowest score, the test average is 61
//Press any key to continue . . .
