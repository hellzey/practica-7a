#ifndef UNICODE
#define UNICODE
#endif 

#include <windows.h>
#include "resource.h"
#include <string>
#include <iostream>
#include <math.h>
HWND ghDlg = 0;
wchar_t char_num1[10];
wchar_t char_num2[10];
wchar_t char_num3[10];
wchar_t resultado[5];
wchar_t num_temp[10];
HWND h_Num1;
HWND h_Num2;
HWND h_Num3;
wint_t num2;
wint_t num3;
wint_t num1;
HWND h_static;
HWND h_icono;

bool suma = false;
bool resta = false;
bool multi = false;
bool divi = false;
bool raiz = false;
bool poten = false;
bool segnum = false;
BOOL CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

int WINAPI wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ PWSTR pCmdLine, _In_ int nCmdShow)
{
    ghDlg = CreateDialog(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), 0, (DLGPROC)WindowProc);
    ShowWindow(ghDlg, nCmdShow);
    MSG msg;
    ZeroMemory(&msg, sizeof(MSG));
    while (GetMessage(&msg, 0, 0, 0))
    {
        if (ghDlg == 0 || !IsDialogMessage(ghDlg, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }
    return (int)msg.wParam;
}

BOOL CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg)
    {

    case WM_INITDIALOG:
        h_Num1 = GetDlgItem(hwnd, EDT_Num1);
        h_Num2 = GetDlgItem(hwnd, EDT_Num2);

        h_static = GetDlgItem(hwnd, resultadoo);
        h_icono = GetDlgItem(hwnd, staticicono);
    case WM_COMMAND:
        switch (LOWORD(wParam))
        {
        case btn1:
            if (segnum == false) {
                GetWindowText(h_Num1, (LPWSTR)char_num1, 10);
                wcscat_s(char_num1, L"1");
                SetWindowText(h_Num1, char_num1);
            }
            else
            {
                GetWindowText(h_Num2, (LPWSTR)char_num2, 10);
                wcscat_s(char_num2, L"1");
                SetWindowText(h_Num2, char_num2);
            }

            break;

        case btn2:
            if (segnum == false) {
                GetWindowText(h_Num1, (LPWSTR)char_num1, 10);
                wcscat_s(char_num1, L"2");
                SetWindowText(h_Num1, char_num1);
            }
            else
            {
                GetWindowText(h_Num2, (LPWSTR)char_num2, 10);
                wcscat_s(char_num2, L"2");
                SetWindowText(h_Num2, char_num2);
            }
            break;

        case btn3:
            if (segnum == false) {
                GetWindowText(h_Num1, (LPWSTR)char_num1, 10);
                wcscat_s(char_num1, L"3");
                SetWindowText(h_Num1, char_num1);
            }
            else
            {
                GetWindowText(h_Num2, (LPWSTR)char_num2, 10);
                wcscat_s(char_num2, L"3");
                SetWindowText(h_Num2, char_num2);
            }
            break;

        case btn4:
            if (segnum == false) {
                GetWindowText(h_Num1, (LPWSTR)char_num1, 10);
                wcscat_s(char_num1, L"4");
                SetWindowText(h_Num1, char_num1);
            }
            else
            {
                GetWindowText(h_Num2, (LPWSTR)char_num2, 10);
                wcscat_s(char_num2, L"4");
                SetWindowText(h_Num2, char_num2);
            }
            break;

        case btn5:
            if (segnum == false) {
                GetWindowText(h_Num1, (LPWSTR)char_num1, 10);
                wcscat_s(char_num1, L"5");
                SetWindowText(h_Num1, char_num1);
            }
            else
            {
                GetWindowText(h_Num2, (LPWSTR)char_num2, 10);
                wcscat_s(char_num2, L"5");
                SetWindowText(h_Num2, char_num2);
            }
            break;

        case btn6:
            if (segnum == false) {
                GetWindowText(h_Num1, (LPWSTR)char_num1, 10);
                wcscat_s(char_num1, L"6");
                SetWindowText(h_Num1, char_num1);
            }
            else
            {
                GetWindowText(h_Num2, (LPWSTR)char_num2, 10);
                wcscat_s(char_num2, L"6");
                SetWindowText(h_Num2, char_num2);
            }
            break;

        case btn7:
            if (segnum == false) {
                GetWindowText(h_Num1, (LPWSTR)char_num1, 10);
                wcscat_s(char_num1, L"7");
                SetWindowText(h_Num1, char_num1);
            }
            else
            {
                GetWindowText(h_Num2, (LPWSTR)char_num2, 10);
                wcscat_s(char_num2, L"7");
                SetWindowText(h_Num2, char_num2);
            }
            break;

        case btn8:
            if (segnum == false) {
                GetWindowText(h_Num1, (LPWSTR)char_num1, 10);
                wcscat_s(char_num1, L"8");
                SetWindowText(h_Num1, char_num1);
            }
            else
            {
                GetWindowText(h_Num2, (LPWSTR)char_num2, 10);
                wcscat_s(char_num2, L"8");
                SetWindowText(h_Num2, char_num2);
            }
            break;

        case btn9:
            if (segnum == false) {
                GetWindowText(h_Num1, (LPWSTR)char_num1, 10);
                wcscat_s(char_num1, L"9");
                SetWindowText(h_Num1, char_num1);
            }
            else
            {
                GetWindowText(h_Num2, (LPWSTR)char_num2, 10);
                wcscat_s(char_num2, L"9");
                SetWindowText(h_Num2, char_num2);
            }
            break;

        case btn0:
            if (segnum == false) {
                GetWindowText(h_Num1, (LPWSTR)char_num1, 10);
                wcscat_s(char_num1, L"0");
                SetWindowText(h_Num1, char_num1);
            }
            else
            {
                GetWindowText(h_Num2, (LPWSTR)char_num2, 10);
                wcscat_s(char_num2, L"0");
                SetWindowText(h_Num2, char_num2);
            }
            break;
        case boton1:

            SetWindowText(h_icono, (LPWSTR)L"+");
            segnum = true;
            suma = true;
            resta = false;
            multi = false;
            divi = false;
            break;
        case boton2:


            SetWindowText(h_icono, (LPWSTR)L"-");
            segnum = true;
            suma = false;
            resta = true;
            multi = false;
            divi = false;
            break;


        case boton4:
            SetWindowText(h_icono, (LPWSTR)L"/");
            segnum = true;
            suma = false;
            resta = false;
            multi = false;
            divi = true;
            break;

        case boton3:
            SetWindowText(h_icono, (LPWSTR)L"x");
            segnum = true;
            suma = false;
            resta = false;
            multi = true;
            divi = false;

            break;
        case IGUAL:

            if (suma == true) {
                num3 = 0;
                num1 = _wtoi(char_num1);
                num2 = _wtoi(char_num2);
                num3 = num1 + num2;
                _itow_s(num3, resultado, 10, 10);

                SetWindowText(h_static, (LPWSTR)resultado);

            }

            if (resta == true) {
                num1 = _wtoi(char_num1);
                num2 = _wtoi(char_num2);
                num3 = num1 - num2;
                _itow_s(num3, resultado, 10, 10);

                SetWindowText(h_static, (LPWSTR)resultado);
            }

            if (multi == true) {
                num1 = _wtoi(char_num1);
                num2 = _wtoi(char_num2);
                num3 = num1 * num2;
                _itow_s(num3, resultado, 10, 10);

                SetWindowText(h_Num3, (LPWSTR)resultado);

                SetWindowText(h_static, (LPWSTR)resultado);

            }

            if (divi == true) {
                num1 = _wtoi(char_num1);
                num2 = _wtoi(char_num2);
                num3 = num1 / num2;
                _itow_s(num3, resultado, 10, 10);
                SetWindowText(h_static, (LPWSTR)resultado);

            }

            segnum = false;

            break;
        case boton5:
            GetWindowText(h_Num1, (LPWSTR)char_num1, 10);

            num1 = _wtoi(char_num1);

            num3 = num1 * num1;

            _itow_s(num3, resultado, 10, 10);


            SetWindowText(h_static, (LPWSTR)resultado);
            break;
        case clean:
            SetWindowText(h_Num1, L"");
            SetWindowText(h_Num2, L"");
            SetWindowText(h_static, L"");
            segnum = false;
            suma = false;
            resta = false;
            multi = false;
            divi = false;

            break;

        case boton7:
            GetWindowText(h_Num1, (LPWSTR)char_num1, 5);


            num1 = _wtoi(char_num1);

            num3 = sqrt(num1);

            _itow_s(num3, resultado, 5, 10);

            SetWindowText(h_Num3, (LPWSTR)resultado);

            SetWindowText(h_static, (LPWSTR)resultado);
            break;
        }
        break;

    case WM_CLOSE:
        DestroyWindow(hwnd);
        return 0;

    case WM_DESTROY:
        PostQuitMessage(0);
        break;

    }

    return FALSE;
}