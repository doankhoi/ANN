#pragma once
#include "Common.h"

class NeuronNetwork
{
public:
	NeuronNetwork(void);
	~NeuronNetwork(void);

	void Calculate(double* inputVector, UINT iCount, double* outputVector = NULL, UINT oCount = 0);
	void BackPropagate(double* actualOuput, double* desiredOutput, UINT count);

	VectorLayers m_Layers;
};

