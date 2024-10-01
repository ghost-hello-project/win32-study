#include <afxwin.h>  // MFC core and standard components

// 应用程序类
class CMinimalMFCApp : public CWinApp {
public:
    virtual BOOL InitInstance();
};

// 主窗口类
class CMainFrame : public CFrameWnd {
public:
    CMainFrame() {
        Create(NULL, _T("Minimal MFC Application"));
    }
};

BOOL CMinimalMFCApp::InitInstance() {
    m_pMainWnd = new CMainFrame;
    m_pMainWnd->ShowWindow(SW_SHOW);
    m_pMainWnd->UpdateWindow();
    return TRUE;
}

// 应用程序对象
CMinimalMFCApp theApp;