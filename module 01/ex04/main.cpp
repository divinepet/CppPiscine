#include <iostream>
#include <fstream>
using std::string;

void replaceWords(string &line, string cut, string paste) {
    int findindex = 0;

    for (int i = 0; true; i++) {
        findindex = line.find(cut, i);
        if (findindex >= 0 && findindex < (int)line.length())
            line = line.substr(0, findindex) + paste + line.substr(findindex + cut.length());
        else
            break;
        i = findindex + (int)paste.length() - 1;
    }
}

int main(int ac, char **av) {
    std::ifstream file;
    std::ofstream replaceFile;
    string line;

    if (ac != 4)
        return 0;
    file.open(av[1]);
    if (!file)
        return 0;
    replaceFile.open((string)av[1] + ".replace");
    while (getline(file, line)) {
        replaceWords(line, av[2], av[3]);
        replaceFile << line + "\n";
    }
    return 0;
}
