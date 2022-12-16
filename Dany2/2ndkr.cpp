#include "document.h"
#include "Input.h"
#include"Output.h"
#include <vector>

using namespace std;

enum class Options
{
	Show = 1,
	Add,
	FileOutput,
	Clear,
	Exit
};

enum class Type
{
	Console = 1,
	File
};


int main()
{
	std::cout << "verbeskiy d 415 var 6 " << std::endl;

	std::vector <std::shared_ptr<document>> documentCase;

	while (true)
	{
		std::cout << "1 - Show documents\n2 - Add documents\n3 - File output\n4 - Clear list\n5 - Exit" << std::endl;

		Options choice = static_cast<Options>(CheckMenuItem(5));

		Type choiceT;

		switch (choice)
		{
		case Options::Show:
			if (documentCase.size() == 0)
			{
				std::cout << "No document entered" << std::endl;
				continue;
			}
			for (int i = 0; i < documentCase.size(); i++)
				std::cout << documentCase[i]->GetAllInfo();
			break;
		case Options::Add:
			std::cout << "1 - Console input\n2 - File input" << std::endl;
			choiceT = static_cast<Type>(CheckMenuItem(2));
			switch (choiceT)
			{
			case Type::Console:
				AdddocumentConsoleInput(documentCase);
				
				InitialDataOutput(documentCase);
				break;
			case Type::File:
				AdddocumentFileInput(documentCase);
				break;
			}
			break;
		case Options::FileOutput:
			if (documentCase.size() == 0)
			{
				std::cout << "First enter что то" << std::endl;
				continue;
			}
			FileOutput(documentCase);
			break;
		case Options::Clear:
			documentCase.clear();
			break;
		case Options::Exit:
			return 0;
		}
	}
}