#include "Output.h"
using namespace std;
void ConsoleOutput(vector<shared_ptr<document>>& documentCase)
{
	for (int i = 0; i < documentCase.size(); i++)
		documentCase[i]->GetAllInfo();
}

void FileOutput(vector<shared_ptr<document>>& documentCase)
{
	ofstream fileRecorder = CheckFileOutput();

	for (int i = 0; i < documentCase.size(); i++)
	{
		fileRecorder << documentCase[i]->GetAllInfo();
	}

}

void InitialDataOutput(vector<shared_ptr<document>>& documentCase)
{
	const int Yes = 1;
	cout << "Save initial data ?\n1 - Yes\n2 - No" << endl;
	if (CheckMenuItem(2) != Yes)
		return;
	
	ofstream fileRecorder = CheckFileOutput();

	string decreeMark = "decree";
	

	fileRecorder << documentCase.size() << endl;

	for (int i = 0; i < documentCase.size(); i++)
	{
		string name =  typeid(*documentCase[i]).name();
		if (name == typeid(decree).name())
		{
			fileRecorder << decreeMark << endl;;
			fileRecorder << static_pointer_cast<decree>(documentCase[i])->GetYear() << endl;
			fileRecorder << static_pointer_cast<decree>(documentCase[i])->GetMonth() << endl;
			fileRecorder << static_pointer_cast<decree>(documentCase[i])->GetDay() << endl;
			fileRecorder << static_pointer_cast<decree>(documentCase[i])->GetdecComeFrom() << endl;
			fileRecorder << static_pointer_cast<decree>(documentCase[i])->GetdecComeTo() << endl;
		}

	}
	fileRecorder.close();
}

