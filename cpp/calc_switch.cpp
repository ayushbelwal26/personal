#include <iostream>
using namespace std;
int main(){
    int choice , a , b;
    cout << "Enter Two numbers: ";
    cin >> a >> b ;
    cout << endl << "1-Add"<< endl << "2-Sub" << endl << "3-mul."<< endl << "4-div."<< endl;
    cin >> choice;
    switch(choice){
        case 1:
        cout << a+b;
        break;
        case 2:
        cout << a-b;
        break;
        case 3:
        cout << a*b;
        break;
        case 4:
        cout << a/b;
        break;
    }
}