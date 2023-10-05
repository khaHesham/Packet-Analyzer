#include "../include/utils.h"
#include <fstream>
#include <iostream>
#include "utils.h"

IOUtils::IOUtils(string inputFilePath, string outputFilePath)
{
    reader.open(inputFilePath, std::ios::in);   // Read mode
    writer.open(outputFilePath, std::ios::app); // Append mode
}

vector<string> IOUtils::readPackets()
{
    vector<string> packets;

    if (reader.is_open())
    {
        string line;
        while (getline(reader, line))
        {
            packets.push_back(line);
        }
        reader.close();
    }

    return packets;
}

void IOUtils::writeToFile(string content)
{
    if (writer.is_open())
    {
        // Write content into the file
        writer << content << "\n"; // Append a newline after each string;
    }
    else
    {
        std::cerr << "Unable to write in file " << std::endl;
    }
}

void IOUtils::openFile(string filePath, std::ios_base::openmode mode)
{
    // if file is not already opened
    if (mode == std::ios::app && !writer.is_open())
    {
        writer.open(filePath, mode);
    }
    else if (mode == std::ios::in && !reader.is_open())
    {
        reader.open(filePath, mode);
    }
    else
    {
        std::cerr << "Unable to open file " << std::endl;
    }
}

IOUtils::~IOUtils()
{
    reader.close();
    writer.close();
}
