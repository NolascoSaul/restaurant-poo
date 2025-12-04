#ifndef SIZE_h
#define SIZE_h

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

enum Size
{
    SMALL = 's',
    MEDIUM = 'm',
    LARGE = 'l'
};

std::istream &operator>>(std::istream &is, Size &size)
{
    std::string input;

    if (is >> input)
    {
        std::transform(input.begin(), input.end(), input.begin(),
                       [](unsigned char c)
                       { return std::tolower(c); });

        if (input == "small" || input == "s")
        {
            size = Size::SMALL;
        }
        else if (input == "medium" || input == "m")
        {
            size = Size::MEDIUM;
        }
        else if (input == "large" || input == "l")
        {
            size = Size::LARGE;
        }
        else
        {
            is.setstate(std::ios::failbit);
        }
    }

    return is;
}

#endif