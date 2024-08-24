#include <iostream>

void rotate_right(float array[], int length) {
    float last_element = array[length - 1]; // Store the value of the last element
    for (int i = length - 1; i > 0; --i) { // Iterate from the second-to-last element to the first
        array[i] = array[i - 1]; // Shift each element to the right
    }
    array[0] = last_element; // Move the last element to the beginning
}

int main() {
    float arr[] = {5.8, 2.6, 9.1, 3.4, 7.0};
    int length = sizeof(arr) / sizeof(arr[0]);

    // Before rotation
    std::cout << "Before rotation: ";
    for (int i = 0; i < length; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Rotate right
    rotate_right(arr, length);

    // After rotation
    std::cout << "After rotation: ";
    for (int i = 0; i < length; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

