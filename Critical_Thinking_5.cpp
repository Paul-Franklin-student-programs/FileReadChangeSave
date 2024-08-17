#include <iostream>   // For input and output (cin, cout)
#include <fstream>    // For file handling (ofstream, ifstream)
#include <string>     // For string manipulation
#include <algorithm>  // For reverse function

int main() {
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
    std::string filePath = "CSC450_CT5_mod5";





    }
}
