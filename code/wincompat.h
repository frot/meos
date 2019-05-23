#ifndef __WINCOMPAT_H
#define __WINCOMPAT_H

#include <cstring>
#include <cstdint>

typedef int32_t __int32;
typedef int64_t __int64;

typedef int32_t LONG;

typedef uint32_t UINT;

typedef uint8_t  BYTE;
typedef uint16_t WORD;
typedef uint32_t DWORD;
typedef uint32_t DWORD;

typedef UINT* UINT_PTR;
typedef LONG* LONG_PTR;

typedef struct _SYSTEMTIME {
  WORD wYear;
  WORD wMonth;
  WORD wDayOfWeek;
  WORD wDay;
  WORD wHour;
  WORD wMinute;
  WORD wSecond;
  WORD wMilliseconds;
} SYSTEMTIME, *PSYSTEMTIME, *LPSYSTEMTIME;

typedef void* HANDLE;
typedef HANDLE HWND;
typedef UINT_PTR WPARAM;
typedef LONG_PTR LPARAM;
typedef LONG_PTR LRESULT;

typedef HANDLE TOOLINFOW;
typedef HANDLE HFONT;
typedef HANDLE HBRUSH;
typedef HANDLE HDC;

typedef struct _RECT {
  LONG left;
  LONG top;
  LONG right;
  LONG bottom;
} RECT, *PRECT;

#define _atoi64(x) atoll(x)

typedef DWORD COLORREF;
#define RGB(r,g,b) ((COLORREF)(((r)&0xff)|(((g)&0xff)<<8)|(((b)&0xff)<<16)))

#define CALLBACK //__stdcall

typedef LRESULT CALLBACK (*WNDPROC)(HWND, UINT, WPARAM, LPARAM);

#endif
