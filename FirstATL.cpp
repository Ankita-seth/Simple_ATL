// FirstATL.cpp : Implementation of CFirstATL

#include "pch.h"
#include "FirstATL.h"


// CFirstATL



STDMETHODIMP CFirstATL::AddNumbers(long Num1, long Num2, long* ReturnVal)
{
    // TODO: Add your implementation code here
    *ReturnVal = Num1 + Num2;
    return S_OK;
}
