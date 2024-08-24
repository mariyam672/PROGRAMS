#include <iostream>

int is_prime(int n) {
    if (n <= 1) 
        return 0;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) // If n is divisible by any number other than 1 and itself
            return 0;   // It's not a prime number
    }

    return 1; // If no divisors other than 1 and n were found, n is prime
}

int main() {
    std::cout << is_prime(19) << std::endl;  // Output: 1
    std::cout << is_prime(1) << std::endl;   // Output: 0
    std::cout << is_prime(51) << std::endl;  // Output: 0
    std::cout << is_prime(-13) << std::endl; // Output: 0

    return 0;
}

