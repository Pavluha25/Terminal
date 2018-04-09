/********************************************************
*                                                       *
*   Copyright (C) Microsoft. All rights reserved.       *
*                                                       *
********************************************************/

#include "precomp.h"

#include "echoDispatch.hpp"

using namespace Microsoft::Console::VirtualTerminal;

void EchoDispatch::Print(const wchar_t wchPrintable)
{
    wprintf(L"Print: %c (0x%x)\r\n", wchPrintable, wchPrintable);
}

void EchoDispatch::PrintString(_In_reads_(cch) wchar_t* const rgwch, const size_t cch)
{
    wprintf(L"PrintString: \"%s\" (%zd chars)\r\n", rgwch, cch);
}

void EchoDispatch::Execute(const wchar_t wchControl)
{
    wprintf(L"Execute: 0x%x\r\n", wchControl);
}
