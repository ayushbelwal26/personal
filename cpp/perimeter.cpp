#include <iostream>
using namespace std;
int main(){
    int l,b,a,p;
    cout << "Enter length: ";
    cin >> l ;
    cout << "Enter width: ";
    cin >> b;
    p = 2*(l+b);
    a = l*b;
    cout << "The perimeter is: " << p<< endl;
    cout << "The area is: " << a << endl;
    if(p>a){
        cout << "The perimeter is bigger";
    }
    else{
        cout << "The area is bigger";
    }
}

