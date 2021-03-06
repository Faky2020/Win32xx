//////////////////////////////////////////////////////
// Rect.h
//  Declaration of the CViewRect class

#ifndef RECT_H
#define RECT_H


// Declaration of CViewRect
class CViewRect : public CWnd
{
public:
    virtual int OnCreate(CREATESTRUCT& cs);
    virtual void OnDestroy();
    virtual LRESULT OnMouseActivate(UINT msg, WPARAM wparam, LPARAM lparam);
    virtual LRESULT OnSize(UINT msg, WPARAM wparam, LPARAM lparam);
    virtual LRESULT OnTimer(UINT msg, WPARAM wparam, LPARAM lparam);
    virtual LRESULT WndProc(UINT msg, WPARAM wparam, LPARAM lparam);

private:
    int m_cxClientMax;
    int m_cyClientMax;
};




#endif  //RECT_H
