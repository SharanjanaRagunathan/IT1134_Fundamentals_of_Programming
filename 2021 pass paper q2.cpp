#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

void findPrimeSum(int evenNumber) {
    for (int i = 2; i <= evenNumber / 2; ++i) {
        if (isPrime(i) && isPrime(evenNumber - i)) {
            std::cout << evenNumber << " = " << i << " + " << evenNumber - i << std::endl;
            return;
        }
    }
    std::cout << "Cannot find two prime numbers that sum up to " << evenNumber << std::endl;
}

int main() {
    int evenNumber;
    std::cout << "Enter an even integer: ";
    std::cin >> evenNumber;

    if (evenNumber % 2 != 0) {
        std::cout << "Please enter an even integer." << std::endl;
        return 1;
    }

    findPrimeSum(evenNumber);

    return 0;
}
