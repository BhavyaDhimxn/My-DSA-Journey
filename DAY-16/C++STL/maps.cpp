#include <iostream>
#include <map>
#include <string>

int main() {
    // Create a map to store student names and their scores
    std::map<std::string, int> studentScores;

    // Insert data into the map
    studentScores["Alice"] = 85;
    studentScores["Bob"] = 90;
    studentScores["Charlie"] = 78;

    // Access and print the scores
    for (const auto& pair : studentScores) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Check if a student is in the map
    std::string student = "Bob";
    if (studentScores.find(student) != studentScores.end()) {
        std::cout << student << " is found with score: " << studentScores[student] << std::endl;
    } else {
        std::cout << student << " is not found." << std::endl;
    }

    return 0;
}