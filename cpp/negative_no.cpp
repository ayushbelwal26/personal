#include <iostream>
using namespace std;
int main(){
    int n , num = 0;
    cout << "The number of elements : " ;
    cin >> n ;
    int arr[n];
    
    for (int i = 0 ; i < n ; i++){
        cout << "Enter the element: " ;
        cin >> arr[i] ;
        if (arr[i] < 0){
            num += 1 ;
        }
    }

    
    for (int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "The number of negative integer are : " << num;

}