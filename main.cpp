#include <KrohaLib/Console.hpp>
#include <KrohaLib/Chars.hpp>

int main()
{
	Result result;
	Console console(&result);

	if (result.Ok())
	{
		const char str[] = "Hello Kroha!";

		console.Write(str, CharsLength(str));
	}

	return 0;
}