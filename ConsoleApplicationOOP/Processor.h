#pragma once
#include "GoodBasic.h"
class Processor : public GoodBasic
{
private:
	float _freq;
	int _cores;
	int _tdp;
public:
	Processor();
	Processor(int id, int price, string name, string description, float freq, int cores, int tdp);

	float getFreq();

	void setFreq(float newFreq);

	int getCores();

	void setCores(int newCores);

	int getTDP();

	void setTDP(int newTDP);

	void toString();
};

