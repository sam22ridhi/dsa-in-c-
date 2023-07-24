#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n, position;

    cout << "Enter the size of the array (max " << MAX_SIZE << "): ";
    cin >> n;

    if (n <= 0 || n > MAX_SIZE) {
        cout << "Invalid array size. Exiting the program.\n";
        return 1;
    }

    cout << "Enter " << n << " elements for the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the position (0 to " << n - 1 << ") to delete the element: ";
    cin >> position;

    if (position < 0 || position >= n) {
        cout << "Invalid position. Exiting the program.\n";
        return 1;
    }

    // Shift elements to the left to overwrite the element to be deleted
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Decrease the size of the array after deletion

    cout << "Array after deletion:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
