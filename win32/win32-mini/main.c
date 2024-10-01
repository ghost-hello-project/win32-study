#include <Windows.h>

/**
 * @brief win32 程序入口
 * 
 * @param hInstance 应用程序的当前实例的句柄
 * @param hPrevInstance 应用程序的上一个实例的句柄。 此参数始终 NULL
 * @param szCmdLine 应用程序的命令行，不包括程序名称
 * @param iCmdShow 控制窗口的显示方式
 */
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow) {
    MessageBox(NULL, TEXT("第一个 win32 程序！"), TEXT("标题！"), 0);
    return 0;
}
