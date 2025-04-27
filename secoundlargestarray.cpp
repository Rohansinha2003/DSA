#include <iostream>
#include <limits.h>  

int main() {
    int n;
    
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if (n < 2) {
        std::cout << "Need at least two elements to find the second largest." << std::endl;
        return 1;
    }

    int arr[n];
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN) {
        std::cout << "There is no second largest number." << std::endl;
    } else {
        std::cout << "The second largest number is: " << second_largest << std::endl;
    }

    return 0;
}