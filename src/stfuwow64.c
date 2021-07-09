// Compile (64bit) as "wow64log.dll" and place in SYSTEM32.
#include <libloaderapi.h>
#define EXPORTABLE __declspec(dllexport)
#define NAKED __declspec(naked)
#define NTAPI __stdcall
#define WINAPI __stdcall

#define STATUS_SUCCESS 0

typedef long NTSTATUS;
typedef int BOOL;


EXPORTABLE NTSTATUS NTAPI Wow64LogInitialize(void){return STATUS_SUCCESS;}
EXPORTABLE NTSTATUS NTAPI Wow64LogMessageArgList(unsigned char Level,const char* Format,void* Args) { return STATUS_SUCCESS; }
EXPORTABLE NTSTATUS NTAPI Wow64LogSystemService(void* ServiceParameters) { return STATUS_SUCCESS; }
EXPORTABLE NTSTATUS NTAPI Wow64LogTerminate(void) { return STATUS_SUCCESS; }


BOOL WINAPI DllMain(void* hinstDLL, unsigned int fdwReason, void* lpvReserved) {
    // The exit code doesn't matter as there's nothing loaded
    // yet to set an error or return value.
    exit(0);
}
