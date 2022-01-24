#pragma once
#include "GoodBasic.h"
class Processor : public GoodBasic
{
private:
	double _freq;
	int _cores;
	int _tdp;
public:
	Processor();
	Processor(int id, int price, string name, string description, double freq, int cores, int tdp);

	double getFreq();

	void setFreq(float newFreq);

	int getCores();

	void setCores(int newCores);

	int getTDP();

	void setTDP(int newTDP);

	void toString();
};

