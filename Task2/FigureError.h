#pragma once

#include <iostream>

class FigureError :
    public std::exception
{
private:

    const char* message{};

public:

    FigureError(const char* str);

    const char* what() const override { return message; }
};

