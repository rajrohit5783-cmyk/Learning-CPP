#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i < 40; i++)
    // {
    //     /* code */
    //     if(i==2){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if(i==2){
            continue; // it will skip only that iteration it will run the rest part
        }
        cout<<i<<endl;
    }

    
    return 0;
}
