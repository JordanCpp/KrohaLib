#include <KrohaLib/Console.hpp>

Console::Console() :
	_input(NULL),
	_output(NULL)
{
	_input  = GetStdHandle(STD_INPUT_HANDLE);
	_output = GetStdHandle(STD_OUTPUT_HANDLE);
}

int Console::Write(const char* text, int size)
{
	DWORD count = 0;

	WriteConsole(_output, text, size, &count, NULL);

	return count;
}
