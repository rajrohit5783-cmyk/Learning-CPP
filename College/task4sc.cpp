#include<iostream>
using namespace std;

int main(){
    string name;
    int m1,m2,m3;
    int total;
    float percentage;

   
    cout<<"Enter Students Name: ";
    cin>>name;

    cout<<"Enter marks 1: "<<endl;
    cin>>m1;

    cout<<"Enter marks 2: "<<endl;
    cin>>m2;
    
    cout<<"Enter marks 3:"<<endl;
    cin>>m3;

    total = m1+m2+m3;

    percentage = total/3.0;

    cout<<"Student name"<<name<<endl;
    cout<<"Total marks"<<total<<endl;
    cout<<"Percentage"<<percentage<<endl;

    if(percentage >=90)
    cout<<"Grade A"<<endl;
    else if(percentage >= 75)
    cout<<"Grade B"<<endl;
    else if (percentage >= 60)
    cout<<"Grade C"<<endl;
    else if(percentage >= 50)
    cout<<"Grade D"<<endl;


    return 0;






}