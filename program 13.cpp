#include <iostream>

int enough(int goal) {
    if (goal <= 0) // If goal is negative or zero, return 1
        return 1;
    
    int sum = 0;
    int n = 0;

    while (sum < goal) {
        n++;
        sum += n;
    }

    return n;
}

int main() {
    std::cout << enough(9) << std::endl;   // Output: 4
    std::cout << enough(21) << std::endl;  // Output: 6
    std::cout << enough(-7) << std::endl;  // Output: 1
    std::cout << enough(1) << std::endl;   // Output: 1

    return 0;
}

