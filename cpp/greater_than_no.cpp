#include <iostream>
using namespace std;
int main(){
    int n,X,num = 0 ,a;
    cout <<  "Enter number of element: " ;
    cin >> n ;
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cout << "Enter element: ";
        cin >> arr[i];
    }

    cout << "What number to check : ";
    cin >> X ;

    cout << "The array is : " ;

    for (int i = 0 ; i < n ; i++){
        cout  << arr[i] << " " ;
    }

    cout << endl;
    
    for (int i = 0 ; i < n ; i++){
        if (arr[i]>X){
            num = num + 1;
        }
    
    }

    cout << num << " " << "elements are greater than " << X << " " << "those are "  ;

    for (int i = 0 ; i < n ; i++){
        if (arr[i]>X){
            cout << arr[i]<< " ";
        }
    
    }


}