#include <Shellcode/ShellCode.hpp>

ShellCode shellCode;

auto __stdcall main() -> int
{

	shellCode.ShellCodeStart();

	system("pause >nul");

	return 0;
}