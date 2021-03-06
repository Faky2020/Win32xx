#include "stdafx.h"
#include "MyWebControl.h"

CWebControl::CWebControl()
{
    // The entry for the dialog's control in resource.rc must match this name.
    CString className = _T("WebControl");

    // Register the window class
    WNDCLASS wc;
    ZeroMemory(&wc, sizeof(wc));

    if (!::GetClassInfo(GetApp().GetInstanceHandle(), className, &wc))
    {
        wc.lpszClassName = className;
        wc.lpfnWndProc = ::DefWindowProc;
        wc.hInstance = GetApp().GetInstanceHandle();
        ::RegisterClass(&wc);
    }

    assert (::GetClassInfo(GetApp().GetInstanceHandle(), className, &wc));
}

void CWebControl::OnInitialUpdate()
{
    // Go to the browser's home page
    GoHome();
}



