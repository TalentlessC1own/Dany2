#include "InputCheck.h"

int CheckIntValue()
{
	std::string valueInput;
	int value;

	while (true)
	{
		std::cout << "ENTER : ";
		getline(std::cin , valueInput);
		try
		{
			value = stoi(valueInput);
			if (value > 0)
				return value;
			else
				throw value;
		}
		catch (std::exception)
		{

			std::cout << " Eror.Try again. " << std::endl;
		}
		catch (int ex_value)
		{
			std::cout << ex_value << " - uncorrect input .Try again." << std::endl;
		}
	}
}

int CheckMenuItem(int numberOfPoints)
{
	std::string valueInput;
	int value;
	while (true)
	{
		std::cout << "ENTER : ";
		getline(std::cin, valueInput);
		try
		{
			value = stoi(valueInput);
			if (value <= numberOfPoints && value >= 1)
				return value;
			else
				throw value;
		}
		catch (std::exception)
		{

			std::cout << "Error. Try again. " << std::endl;
		}
		catch (int ex_value)
		{
			std::cout << ex_value << " menu item does not exist.Try again." << std::endl;
		}
	}
}

std::string CheckLineString(std::ifstream& file)
{

	std::string tempValue = "";
	try
	{
		std::getline(file, tempValue);
		return tempValue;
	}
	catch (const std::exception)
	{
		std::cout << "There is not enough data in the file or incorrect file filling form." << std::endl;
		throw std::invalid_argument("Wrong type. Expected string");

	}
}

double CheckDoubleValue()
{
	std::string valueInput;
	double value;
	while (true)
	{
		std::cout << "ENTER : ";
		getline(std::cin, valueInput);
		try
		{
			value = stod(valueInput);
			if (value > 0)
				return value;
			else
				throw value;
		}
		catch (std::exception)
		{

			std::cout << " Eror.Try again. " << std::endl;
		}
		catch (double ex_value)
		{
			std::cout << ex_value << " - uncorrect input .Try again." << std::endl;
		}
	}
}

int CheckLineInt(std::ifstream& file)
{
	std::string tempValue = "";
	int tempInt = 0;
	try
	{
		std::getline(file, tempValue);
	}
	catch (const std::exception)
	{
		std::cout << "There is not enough data in the file or incorrect file filling form." << std::endl;
		throw std::invalid_argument("Not enough data");

	}
	try
	{
		tempInt = stoi(tempValue);
		if (tempInt < 0)

		{
			throw  std::invalid_argument("Out of range ");
		}
		else
			return tempInt;
	}
	catch (const std::exception)
	{
		std::cout << "Wrong data type." << std::endl;
		throw std::invalid_argument("Wrong data type.");
	}
}


double CheckLineDouble(std::ifstream& file)
{
	std::string tempValue = "";
	double tempDouble = 0;
	try
	{
		std::getline(file, tempValue);
	}
	catch (const std::exception&)
	{
		std::cout << "There is not enough data in the file or incorrect file filling form." << std::endl;
		throw std::invalid_argument("Not enough data");

	}
	try
	{
		tempDouble = stod(tempValue);
		if (tempDouble < 0)

		{
			throw  std::invalid_argument("Out of range ");
		}
		else
			return tempDouble;
	}
	catch (const std::exception)
	{
		std::cout << "Wrong data type." << std::endl;
		throw std::invalid_argument("Wrong data type.");
	}
}
