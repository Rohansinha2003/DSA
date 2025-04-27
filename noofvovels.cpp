#include <iostream>
using namespace std;


int countVowels(const std::string& s) {
    int count = 0;
    for (char c : s) {
        switch (std::tolower(c)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count++;
                break;
        }
    }
    return count;
}
int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    int vowelCount = countVowels(input);
    std::cout << "Number of vowels: " << vowelCount << std::endl;
    return 0;
}