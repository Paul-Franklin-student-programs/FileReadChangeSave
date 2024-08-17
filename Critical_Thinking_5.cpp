#include <iostream>   // For input and output (cin, cout)
#include <fstream>    // For file handling (ofstream, ifstream)
#include <string>     // For string manipulation
#include <iterator>   // For inputing from file
#include <algorithm>  // For reverse function

int main() {
    //initializes two filepaths and gets string input from user
    std::string filePath_CT5 = "CSC450_CT5_mod5.txt";
    std::string filePath_CT5_reverse = "CSC450-mod5-reverse.txt";
    std::string userString;
    while(true) {
        std::cout<<"Enter a string that is 50 characters or shorter"<< std::endl;
        std::getline(std::cin,userString);
        if(userString.length() > 50) {
            std::cout<<"Alert: Please enter a string that is 50 characters or less."<<std::endl;
        }
        else {
            break;
        }
    }

    //appends text file at filePath_CT5 with userString
    std::ofstream outFile(filePath_CT5, std::ios::app);
    if (outFile.is_open()) {
        outFile << userString << std::endl;
        outFile.close();
    }

    //reads the now-appended file and captures the contents in a variable
    std::string firstFileContent;
    std::ifstream inFile(filePath_CT5);
    if (inFile.is_open()) {
        firstFileContent.assign((std::istreambuf_iterator<char>(inFile)),
                        std::istreambuf_iterator<char>());
        inFile.close();
    } else {
        std::cerr << "Unable to open file for reading: " << filePath_CT5 << std::endl;
        return 1;
    }

    //reverses contents of variable called firstFileContent and assigns result to new variable
    reverse(firstFileContent.begin(),firstFileContent.end());
    std::string firstFileContentReversed = firstFileContent;

    //creates a new text file and adds the reversed version of the contents of initial text file
    outFile.open(filePath_CT5_reverse);
    if (outFile.is_open()) {
        outFile << firstFileContentReversed;
        outFile.close();
    } else {
        std::cerr << "Unable to open file for writing: " << filePath_CT5_reverse << std::endl;
        return 1;
    }
    return 0;
}