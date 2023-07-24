#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void insertElements(int arr[], int& n, int k) {
    if (n + k > MAX_SIZE) {
        cout << "Not enough space to insert " << k << " elements.\n";
        return;
    }

    cout << "Enter " << k << " elements to insert:\n";
    for (int i = 0; i < k; i++) {
        cin >> arr[n + i];
    }

    int position;
    cout << "Enter the position (0 to " << n << ") to insert the elements: ";
    cin >> position;

    if (position < 0 || position > n) {
        cout << "Invalid position. Elements will be inserted at the end.\n";
        position = n;
    }

    // Shift existing elements to the right to create space for the new elements
    for (int i = n - 1; i >= position; i--) {
        arr[i + k] = arr[i];
    }

    // Insert the new elements into the array
    for (int i = 0; i < k; i++) {
        arr[position + i] = arr[n + i];
    }

    // Update the size of the array
    n += k;

    cout << "Array after insertion:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void deleteElements(int arr[], int& n, int k) {
    if (k > n) {
        cout << "Invalid number of elements to delete. There are only " << n << " elements in the array.\n";
        return;
    }

    cout << "Enter " << k << " elements to delete:\n";
    for (int i = 0; i < k; i++) {
        int element;
        cin >> element;
        int position = -1;

        // Find the position of the element to delete
        for (int j = 0; j < n; j++) {
            if (arr[j] == element) {
                position = j;
                break;
            }
        }

        // If the element is found, shift the elements to the left to delete it
        if (position != -1) {
            for (int j = position; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--; // Decrease the size of the array
        }
    }

    cout << "Array after deletion:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[MAX_SIZE];
    int n;

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

    int k;
    cout << "Enter the number of elements to insert: ";
    cin >> k;
    insertElements(arr, n, k);

    cout << "Enter the number of elements to delete: ";
    cin >> k;
    deleteElements(arr, n, k);

    return 0;
}

