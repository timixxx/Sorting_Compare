#include <string>
#pragma once
int FileMasLength(std::string file);
int* GetFileMas(std::string file);
int* HandedInput(int sizemas);
int* RandInput(int sizemas);
void masPrint(int* mas, int sizemas);
void Output(int* mas, int sizemas, std::string typesort, double duration);