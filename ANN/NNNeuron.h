#pragma once
#include "Common.h"
#include <Windows.h>

class NNNeuron
{
public:
	NNNeuron(LPCTSTR str);
	~NNNeuron(void);
	void AddConnection(UINT iNeuron, UINT iWeight);
	void AddConnection(NNConnection const& conn);
	double output;

	VectorConnections m_Connections;
};

