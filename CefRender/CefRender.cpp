// CefRender.cpp : 定义应用程序的入口点。
//

#include "stdafx.h"
#include "CefRender.h"
#include <include/cef_app.h>
#include "cef_depence/shared/renderer/client_app_renderer.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

	CefEnableHighDPISupport();

	CefMainArgs main_args(hInstance);
	CefRefPtr<client::ClientAppRenderer> app(new client::ClientAppRenderer);
	void *sandboxInfo = nullptr;
	int exit_code = CefExecuteProcess(main_args, app.get(), sandboxInfo);
    return exit_code;
}


