#include<iostream>
using namespace std;

int main(){
    int num =1 ;
    int a = 0  ;
    int b = 0 ;
            cout << "Enter an integer: ";
            cin >> num ;
        while(num != 0) {
            if(num%2 == 1) {
                b++ ;
            } 
            else {
                a++ ;
            }
            cout << "Enter an integer: ";
            cin >> num ;
        }
        

    cout << "#Even numbers = " << a << endl ;
    cout << "#Odd numbers = "<< b ;
    return 0;
}
