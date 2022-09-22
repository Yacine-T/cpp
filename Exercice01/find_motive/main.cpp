#include <iostream>
#include <string>
#include <fstream>

int main() {

    std::string path;
    //std::string symbol;
    std::cout << "Could give the the file path you want to analyze ?" << std::endl;
    std::cin >> path;
    std::ifstream file(path);
    if (file.is_open()) {
        std::string tmp;
        std::string file_content;
        while (file.good())
        {
            file >> tmp;
            tmp.append(" ");
            file_content.append(tmp);
        }
        std::cout << "The file content is : \n" << file_content;
        return 0;
    }
    std::cout << "The file " << path << " could not be opened";
    return 1;

    /*std::cout << "Veuillez entrer un motif svp ?" << std::endl;
    std::cin >> symbol;
    std::cout << "Chemin : " << file << "\nmotif : " << symbol;
    */
}
