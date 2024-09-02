#include <iostream>
#include <fstream>
#include <string>

int readchar(const char *a)
{
    std::ifstream rfile(a, std::ios::binary); // open file to be read

    char ch{};
    int charcount{};

    if (rfile.is_open())
    {
        while (rfile.get(ch))
        {
            charcount++;
        }
        std::cout << "\t" << charcount << " " << a << "\n"; // print character count

        if (charcount == 0)
        {
            std::cerr << "The file does not have any characters!\n"; // error for 0 output
        }

        return 0;
    }
    else
    {
        std::cerr << "The file " << a << " could not be opened!\n"; // error for when file open fails or file not found
        return 1;
    }
}

int readline(const char *a)
{
    std::ifstream rfile(a, std::ios::binary); // open file to be read

    std::string line;
    int linecount{};

    if (rfile.is_open())
    {
        while (std::getline(rfile, line))
        {
            linecount++;
        }
        std::cout << "\t" << linecount << " " << a << "\n"; // print line count

        if (linecount == 0)
        {
            std::cerr << "This file does not contain any lines!\n"; // error for no line found
        }

        return 0;
    }
    else
    {
        std::cerr << "The file " << a << " could not be opened!\n"; // error for when file open fails or file not found
        return 1;
    }
}

int readword(const char *a)
{
    std::ifstream rfile(a);

    char ch;
    bool in_word = false;
    int wordcount{};
    if (rfile.is_open())
    {
        while (rfile.get(ch))
        {
            if (std::isspace(ch)) //check if ch is equal to space, tab, and newline
            {
                if (in_word) //if true increment word count and turn in_word false
                {
                    wordcount++;
                    in_word = false;
                }
            }
            else
            {
                in_word = true;
            }
            
        }

        //increment for last word.
        if (in_word)
            {
                wordcount++;
            }
            
         std::cout << "\t" << wordcount << " " << a << "\n"; // print word count

        return 0;
    }
    else
    {
        std::cerr << "The file " << a << " could not be opened!\n"; // error for when file open fails or file not found
        return 1;
    }
}

int readletter(const char *a)
{
    std::ifstream rfile(a, std::ios::binary); // open file to be read

    std::string line;
    int charcount{};

    if (rfile.is_open())
    {
        while (std::getline(rfile,line))
        {
            charcount+=line.length();
        }
        rfile.close(); // Ensure the file is closed after reading

        std::cout << "\t" << charcount << " " << a << "\n"; // print character count

        if (charcount == 0)
        {
            std::cerr << "The file does not have any non-whitespace characters!\n"; // error for 0 output
        }

        return 0;
    }
    else
    {
        std::cerr << "The file " << a << " could not be opened!\n"; // error for when file open fails or file not found
        return 1;
    }
}