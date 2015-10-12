#include "stdafx.h"
#include "NeuronNetwork.h"
#include <assert.h>

NeuronNetwork::NeuronNetwork(void)
{
}


NeuronNetwork::~NeuronNetwork(void)
{
}

void NeuronNetwork::Calculate(double* inputVector, UINT iCount, double* outputVector, UINT oCount){
	VectorLayers::iterator lit = m_Layers.begin();
	VectorNeurons::iterator nit;

	//Load input
	if( lit < m_Layers.end()) {
		nit = (*lit)->m_Neurons.begin();
		int count = 0;
		assert( iCount == (*lit)->m_Neurons.size());

		while( (nit < (*lit)->m_Neurons.end()) && (count < iCount)) {
			(*nit)->output = inputVector[count];
			nit++;
			count++;
		}
	}

	for(lit++; lit < m_Layers.end(); lit++) {
		(*lit)->Caculate();
	}

	if( outputVector != NULL) {
		lit = m_Layers.end();
		lit--;
		nit = (*lit)->m_Neurons.begin();
		for( int ii = 0; ii < oCount; ii++) {
			outputVector[ii] = (*nit)->output;
			nit++;
		}
	}
}
