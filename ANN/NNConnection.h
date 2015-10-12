#pragma once
#include "Common.h"
#include <Windows.h>

class NNConnection
{
public:
	NNConnection(UINT neuron = ULONG_MAX, UINT weight = ULONG_MAX);
	~NNConnection(void);

	UINT NeuronIndex;
	UINT WeightIndex;
};

