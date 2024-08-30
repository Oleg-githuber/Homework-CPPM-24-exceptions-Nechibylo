#pragma once

#include <iostream>

class bad_length : std::exception
{
private:

	const char* message{};

public:

	bad_length(const char* str);

	const char* what() const override { return message; }
};

