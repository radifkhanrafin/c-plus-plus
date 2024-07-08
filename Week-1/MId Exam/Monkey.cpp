#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

void process_line(const std::string& line) {
    std::istringstream stream(line); // Use istringstream to split the line into words
    std::string word;
    bool firstWord = true; // To handle spacing correctly in the output

    while (stream >> word) {
        std::sort(word.begin(), word.end()); // Sort the characters of each word
        if (!firstWord) {
            std::cout << " "; // Add a space before each word except the first
        }
        std::cout << word;
        firstWord = false;
    }
    std::cout << std::endl;
}

int main() {
    std::string line;
    while (std::getline(std::cin, line)) { // Read input until EOF
        process_line(line);
    }
    return 0;
}
