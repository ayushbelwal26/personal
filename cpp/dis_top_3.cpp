#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];   
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first = -1, second = -1, third = -1;

    for (int i = 0; i < n; i++) {
        int x = arr[i];

        if (x > first) {
            third = second;
            second = first;
            first = x;
        }
        else if (x > second) {
            third = second;
            second = x;
        }
        else if (x > third) {
            third = x;
        }
    }

    cout << first << " " << second << " " << third;
    return 0;
}
