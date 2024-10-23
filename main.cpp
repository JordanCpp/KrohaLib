#include <KrohaLib/Console.hpp>

int main()
{
	Result result;
	Console console(&result);

	if (result.Ok())
	{
		console.Write("Hello Kroha!", 12);
	}

	return 0;
}