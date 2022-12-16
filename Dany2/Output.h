#pragma once
#include "document.h"
#include "decree.h"
#include <vector>
#include "InputCheck.h"
#include "CheckFile.h"

void ConsoleOutput(std::vector<std::shared_ptr<document>>& documentCase);

void FileOutput(std::vector<std::shared_ptr<document>>& documentCase);

void InitialDataOutput(std::vector<std::shared_ptr<document>>& documentCase);