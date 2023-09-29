#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string mainString = "Hello, World!";
    std::string substringToFind = "World";

    // Use std::string::find to check if the substring exists
    size_t found = mainString.find(substringToFind);

    // Check if the substring was found
    bool isSubstringFound = (found != string::npos);

    // Output the result
    if (isSubstringFound) {
        cout << "The substring \"" << substringToFind << "\" was found." << std::endl;
    } else {
        cout << "The substring \"" << substringToFind << "\" was not found." << std::endl;
    }

    return 0;
}
