#pragma once
#include "document.h"
#include <string>

using namespace std;
class decree:
	public document
{
private:
	string decComeFrom;
	string decComeTo;
public:
	decree(string valdecComeFrom, string valdecComeTo, int valYear, int valMonth, int valDay)
		:document(valYear, valMonth, valDay) , decComeFrom(valdecComeFrom), decComeTo(valdecComeTo)
{} 

int GetYear() override;

int GetMonth()  override;

int GetDay()  override;

string GetdecComeFrom();

string GetdecComeTo();

string GetAllInfo()  override;
};