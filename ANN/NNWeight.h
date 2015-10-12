#pragma once
#include "Common.h"
#include <Windows.h>

class NNWeight
{
public:
	NNWeight(LPCTSTR str, double val = 0.0);
	~NNWeight(void);
	double value;
};

