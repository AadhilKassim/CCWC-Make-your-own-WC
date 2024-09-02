#include <iostream>
#include <fstream>
#include <string>

int readchar(const char *a)
{
    std::ifstream rfile(a,std::ios::binary);
    char ch{};
    int charcount{};
    if(rfile.is_open())
    {
        while(rfile.get(ch))
        {
            charcount++;
        }
        std::cout << "\t" << charcount << " " << a << "\n";

        if (charcount == 0)
        {
            std::cerr << "The file does not have any characters!\n";
        }
        
        return 0;
    }else{
        std::cerr << "The file "<< a <<" could not be opened!\n";
        return 1;
    }
}

int readline(const char a[])
{
    std::ifstream rfile(a,std::ios::binary);
    std::string line;
    int linecount{};

    if(rfile.is_open())
    {
        while(std::getline(rfile,line))
        {
            linecount++;
        }
        std::cout << "\t" << linecount << " " << a << "\n";

        if (linecount == 0)
        {
            std::cerr << "This file does not contain any lines!\n";
        }
        
        return 0;
    }else{
        std::cerr << "The file "<< a <<" could not be opened!\n";
        return 1;
    }
}