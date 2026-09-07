// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the FF6DEBUGMENU_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// FF6DEBUGMENU_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef FF6DEBUGMENU_EXPORTS
#define FF6DEBUGMENU_API __declspec(dllexport)
#else
#define FF6DEBUGMENU_API __declspec(dllimport)
#endif

// This class is exported from the dll
class FF6DEBUGMENU_API CFF6DebugMenu {
public:
	CFF6DebugMenu(void);
	// TODO: add your methods here.
};

extern FF6DEBUGMENU_API int nFF6DebugMenu;

FF6DEBUGMENU_API int fnFF6DebugMenu(void);
