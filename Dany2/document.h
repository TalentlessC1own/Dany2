#pragma once
#include <iostream>
class document
{
protected:
	int Year;
	int Month;
	int Day;
public:
	document(int valYear, int valMonth,int valDay)
		:Year(valYear), Month(valMonth), Day(valDay){}
	virtual int GetYear() = 0;

	virtual int GetMonth() = 0;

	virtual int GetDay() = 0;

	virtual std::string GetAllInfo() = 0;

	virtual ~document() = default;
};