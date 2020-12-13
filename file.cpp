#include<iostream>
#include<fstream>
#include<filesystem>
#include<string>
#include<vector>

namespace fs = std::filesystem;

int main()
{
    std::string filePath = "./";
    std::vector<std::fstream> files();
    for (const auto & entry : fs::directory_iterator(filePath))
    {
        std::cout<<entry.path()<<std::endl;
        if(!fs::is_directory(entry.path()))
        {
            files.enumerate().open(entry.path(),std::ios::in);
        }
        
    }

    for(auto i = files.begin(); i!=files.end();++i)
    {
        (*i).close();
    }

    return 0;
}
