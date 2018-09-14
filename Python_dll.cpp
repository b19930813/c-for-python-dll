// Python_dll.cpp : 定義 DLL 應用程式的匯出函式。
//

#include "stdafx.h"
#include <math.h>
#define LIBDLL extern "C" _declspec(dllexport)


LIBDLL int standard_Deviation(int data[]) {
	float sum = 0.0, mean, standardDeviation = 0.0;

	int i;

	for (i = 0; i < 5; ++i)
	{
		sum += data[i];
	}

	mean = sum / 5;

	for (i = 0; i < 5; ++i){
		standardDeviation += pow(data[i] - mean, 2);
		}
	float result= sqrt(standardDeviation / 5);
	return result;
}

