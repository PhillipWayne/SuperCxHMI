// stdafx.h : include file for standard system include files,
//      or project specific include files that are used frequently,
//      but are changed infrequently

#if !defined(AFX_STDAFX_H__3782C5AA_C441_4C96_8EAD_C24D85354F4F__INCLUDED_)
#define AFX_STDAFX_H__3782C5AA_C441_4C96_8EAD_C24D85354F4F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define STRICT
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0400
#endif
#define _ATL_APARTMENT_THREADED

#include <atlbase.h>
//You may derive a class from CComModule and use it if you want to override
//something, but do not change the name of _Module
extern CComModule _Module;
#include <atlcom.h>
#include <atlctl.h>

#include "../CxOle/CxHmiObj.h"
#include "../CxOle/CxHmiMisc.h"
#include "../CxOle/CxDispid.h"
#include "../CxOle/CxDrawObj.h"

#define _WTL_USE_CSTRING

#include <atlapp.h>       
#include <atlctrls.h>
#include <atlCtrlx.h>
#include <atlmisc.h>


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__3782C5AA_C441_4C96_8EAD_C24D85354F4F__INCLUDED)
