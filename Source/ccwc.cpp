#include <iostream>
#include <fstream>
#include <string>
#include "file.h"

int main(int argc, char *argv[])
{
    if (argc>2)
    {
        if (std::string(argv[1]) == "-c")
        {
            if(readchar(argv[2]) != 0)
            {
            std::cerr << "Error processing the file!\n";
            return 1;
            }
        }else if (std::string(argv[1]) == "-l")
        {
            if(readline(argv[2]) != 0)
            {
            std::cerr << "Error processing the file!\n";
            return 1;
            }
        }else if (std::string(argv[1]) == "-w")
        {
            if(readword(argv[2]) != 0)
            {
            std::cerr << "Error processing the file!\n";
            return 1;
            }
        }else if (std::string(argv[1]) == "-m")
        {
            if(readletter(argv[2]) != 0)
            {
            std::cerr << "Error processing the file!\n";
            return 1;
            }
        }else
        {
            std::cerr << "Unkown option";

        }
    }else
    {
     if(readchar(argv[1]) != 0)
        {
        std::cerr << "Error processing the file!\n";
        return 1;
        }
    
    if(readline(argv[1]) != 0)
        {
        std::cerr << "Error processing the file!\n";
        return 1;
        }
    
    if(readword(argv[1]) != 0)
        {
        std::cerr << "Error processing the file!\n";
        return 1;
        }
    }

        return 0;
}
