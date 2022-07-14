#include<iostream>
#include<fstream>
#include<filesystem>
#include<string>

namespace fs = std::filesystem;

int 
main()
{
    std::string filePath = "./";
    for (const auto & entry : fs::directory_iterator(filePath))
        std::cout<<entry.path()<<std::endl;
    return 0;
}
