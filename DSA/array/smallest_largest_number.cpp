#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {5, 15, 22, 1, -15, 24, 5, 17};
    int size = sizeof(arr) / sizeof(int);

    int smallest1 = INT_MAX, largest1 = INT_MIN;
    int s1 = -1, l1 = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest1) {
            smallest1 = arr[i];
            s1 = i;
        }
        if (arr[i] > largest1) {
            largest1 = arr[i];
            l1 = i;
        }
    }

    cout << "Smallest: " << smallest1 << " at index " << s1 << endl;
    cout << "Largest: " << largest1 << " at index " << l1 << endl;

    return 0;
}
