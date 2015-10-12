#pragma once
#include "Common.h";
#include <Windows.h>
using namespace std;

class NNLayer
{
public:
	NNLayer(LPCTSTR str, NNLayer* pPrev = NULL);
	~NNLayer(void);
	void Caculate();
	void Backpropagate(
		vector<double>& dErr_wrt_dXn, /* in*/
		vector<double>& dErr_wrt_dXnm1, /* out */
		double etaLearningRate);
	NNLayer* m_pPrevLayer;
	VectorNeurons m_Neurons;
	VectorWeigts m_Weights;
};

