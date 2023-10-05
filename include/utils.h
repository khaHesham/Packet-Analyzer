#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

class IOUtils
{
private:
    std::ofstream writer;
    std::ifstream reader;

public:
    IOUtils(string inputFilePath, string outputFilePath);
    vector<string> readPackets();
    void writeToFile(string content);
    void openFile(string filePath, std::ios_base::openmode mode);
    ~IOUtils();
};

#endif // UTILS_H
