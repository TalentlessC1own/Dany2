#pragma once
#include "document.h"
#include "decree.h"
#include <vector>
#include "InputCheck.h"

enum class documentTypes
{
	decreee = 1,

	out

};

void AdddocumentConsoleInput(std::vector<std::shared_ptr<document>>& documentCase);

void AdddocumentFileInput(std::vector<std::shared_ptr<document>>& documentCase);

