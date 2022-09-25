#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <boost/algorithm/string.hpp>



std::vector<std::string> tokenize(std::ifstream &ifs) {
    std::vector<std::string> v;
    std::string tmp;
    while (ifs.good())
    {
        ifs >> tmp;
        v.push_back(tmp);
    }
    return v;
}

int getNbOcc(std::vector<std::string> v, std::string subStr){
    int count = 0;
    for (int i = 0; i < v.size(); i++) {
        bool b =  boost::algorithm::contains(v[i], subStr);
        if (b == 1)
        {
            count++;
        }
    }

    return count;
}

int main(int argc, char *argv[]) {
    std::ifstream file(argv[1]);
    if (argc != 3) {
        std::cout << "Usage : You have to enter only 2 arguments.";
        return 1;
    }
    if (file.is_open()) {
        std::vector<std::string> tokens = tokenize(file);
        int res = getNbOcc(tokens, argv[2]);
        std::cout << "The file " << argv[1] << " contains " << res << " words containing the motive " << argv[2];
        return 0;
    }
    std::cout << "The file " << argv[1] << " could not be opened";
    return 1;
}