#include <iostream>   // For input and output (cin, cout)
#include <fstream>    // For file handling (ofstream, ifstream)
#include <string>     // For string manipulation
#include <iterator>   // For inputing from file
#include <algorithm>  // For reverse function

int main() {
    std::string filePath_CT5 = "CSC450_CT5_mod5";
    std::string filePath2_CT5 = "update_text_file";
    std::string userString;
    while(true) {
        std::cout<<"Enter a string that is 50 characters or shorter"<< std::endl;
        std::cin>>userString;
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








    }
}
