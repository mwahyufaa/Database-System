#include <iostream>
#include <math.h>
#include <string>

void printBorder(int length) {
    for (int i = 0; i < length; i++) {
        std::cout << "*";
    }
    std::cout << std::endl;
}

void printWelcomeMessage(const std::string &message, int totalWidth) {
    int messageLength = message.length();
    
    // Calculate padding on the left and right to center the message
    int totalPadding = totalWidth - messageLength - 2;  // Subtract 2 for the '*' on each side
    int leftPadding = totalPadding / 2;
    int rightPadding = totalPadding - leftPadding;
    
    printBorder(totalWidth);  // Top border
    std::cout << "*" << std::string(leftPadding, ' ') << message << std::string(rightPadding, ' ') << "*" << std::endl;
    printBorder(totalWidth);  // Bottom border
}

void userIdentity(char userName, long userIdentityNumber){
    
}
int main() {
    std::string welcomeMessage = "TAXICOUNT";
    int totalWidth = 40;  // Set the desired total width for the border
    printWelcomeMessage(welcomeMessage, totalWidth);

    return 0;
}
