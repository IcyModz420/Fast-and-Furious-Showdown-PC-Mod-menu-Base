// FF6DebugMenu.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "FF6DebugMenu.h"


// This is an example of an exported variable
FF6DEBUGMENU_API int nFF6DebugMenu=0;

// This is an example of an exported function.
FF6DEBUGMENU_API int fnFF6DebugMenu(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CFF6DebugMenu::CFF6DebugMenu()
{
    return;
}
