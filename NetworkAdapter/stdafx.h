// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>
#include <signal.h>

#define _WINSOCK_DEPRECATED_NO_WARNINGS

#ifndef WIN32_LEAN_AND_MEAN
    #define WIN32_LEAN_AND_MEAN
#endif

#include <winsock2.h>
#include <Ws2tcpip.h>
#include <MSWSock.h>
#include <iphlpapi.h>
#include <Windows.h>

// Link with ws2_32.lib
#pragma comment(lib, "Ws2_32.lib")
#pragma comment(lib, "Iphlpapi.lib")


#define MALLOC(x)       HeapAlloc(GetProcessHeap(), 0, (x))
#define FREE(x)         HeapFree(GetProcessHeap(), 0, (x))

typedef SOCKET * SOCKPTR;

// TODO: reference additional headers your program requires here
