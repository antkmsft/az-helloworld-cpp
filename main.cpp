#include <iostream>

#include <azure/core/datetime.hpp>

int main()
{
	std::cout << "Current time in UTC: " << Azure::DateTime(Azure::DateTime::clock::now()).ToString(); // Makes little sense and is not a good example, but this like is sufficient just to verify that it links with AzSDK.
}
