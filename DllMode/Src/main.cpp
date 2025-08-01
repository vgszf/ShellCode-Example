#include <Windows.h>

auto APIENTRY DllMain ( HINSTANCE hInstDLL , DWORD fdwReason , LPVOID lpReserved ) -> BOOL
{
    switch ( fdwReason )
    {
    case DLL_PROCESS_ATTACH:
		MessageBox( NULL , ( L"ShellCode Works" ), ( L"Information" ) , MB_OK | MB_ICONINFORMATION );
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}