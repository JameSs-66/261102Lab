#include<iostream>
using namespace std;

int main(){
    int num = 1,  oddNum=0,  evenNum=0;

    while(num != 0){
    cout << "Enter an integer: ";
    cin >> num;

    if(num%2 != 0){
        oddNum++;
       
    }else{
         evenNum++;
    }
    }
    cout << "#Even numbers = " << evenNum-1 << "\n";
    cout << "#Odd numbers = " << oddNum;
    return 0;
}
