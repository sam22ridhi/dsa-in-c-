#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n, position, newElement;

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

    cout << "Enter the position (0 to " << n << ") to insert the new element: ";
    cin >> position;

    if (position < 0 || position > n) {
        cout << "Invalid position. Exiting the program.\n";
        return 1;
    }

    cout << "Enter the new element to insert: ";
    cin >> newElement;

    // Shift elements to the right to make space for the new element
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position] = newElement;

    cout << "Array after insertion:\n";
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
