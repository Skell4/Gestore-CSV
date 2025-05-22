#include "mainwindow.h"
#include <QApplication>

#ifdef Q_OS_WIN
#include <windows.h>
#include <dwmapi.h>
#pragma comment(lib, "dwmapi.lib")

#ifndef DWMWA_USE_IMMERSIVE_DARK_MODE
#define DWMWA_USE_IMMERSIVE_DARK_MODE 20
#endif

bool enableDarkTitleBar(HWND hwnd) {
    BOOL useDark = TRUE;
    return SUCCEEDED(DwmSetWindowAttribute(hwnd, DWMWA_USE_IMMERSIVE_DARK_MODE, &useDark, sizeof(useDark)));
}
#endif

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

#ifdef Q_OS_WIN
    HWND hwnd = reinterpret_cast<HWND>(w.winId());
    enableDarkTitleBar(hwnd);
#endif

    return a.exec();
}
