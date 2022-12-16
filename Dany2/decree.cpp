#include "decree.h"
using namespace std;
int decree::GetYear()
{
	return Year;
}
int decree::GetMonth()
{
	return Month;
}
int decree::GetDay()
{
	return Day;
}
string decree::GetdecComeFrom()
{
	return decComeFrom;
}
	  
string decree::GetdecComeTo()
{
	return decComeTo;
}
string decree::GetAllInfo()
{
	return  "decree  date:  " + to_string(GetYear()) + "." + to_string(GetMonth()) + "."  + to_string(GetDay()) + "\n come from"
		+ decComeFrom + "to" + decComeTo + "\n";
}