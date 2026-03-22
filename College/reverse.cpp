#include<iostream>
using namespace std;

int ReverseNumber(int Number); 


// Reverse A Number
int ReverseNumber(int Number){
    int reverse = 0;
    while(Number > 0){
        int Digit = Number % 10;
        reverse = reverse * 10 + Digit;
        Number  = Number / 10;
    }
        return reverse;

}

//Main Function
int main(){
    int num;


    cout<<"The Number is: ";
    cin>>num;

    cout<<"The reversed No is: "<<ReverseNumber(num);



}


