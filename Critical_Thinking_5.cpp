#include <iostream>   // For input and output (cin, cout)
#include <fstream>    // For file handling (ofstream, ifstream)
#include <string>     // For string manipulation
#include <iterator>   // For inputing from file
#include <algorithm>  // For reverse function
int main() {
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


    std::ofstream outFile(filePath_CT5, std::ios::app);
    if (outFile.is_open()) {
        outFile << userString << std::endl;
        outFile.close();
    }
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


    reverse(firstFileContent.begin(),firstFileContent.end());


    outFile.open(filePath_CT5_reverse);
    if (outFile.is_open()) {
        outFile << firstFileContent;
        outFile.close();
    } else {
        std::cerr << "Unable to open file for writing: " << filePath_CT5_reverse << std::endl;
        return 1;
    }
    return 0;
}