#include "Processor.h"

Processor::Processor() :
	GoodBasic{ 0, 1, "noname", "nodescription" } {
	_freq = 2.9;
	_cores = 6;
	_tdp = 65;
}
Processor::Processor(int id, int price, string name, string description, double freq, int cores, int tdp) :
	GoodBasic{ id, price, name, description } {
	_freq = freq;
	_cores = cores;
	_tdp = tdp;
}

double Processor::getFreq() {
	return _freq;
}

void Processor::setFreq(float newFreq) {
	if (newFreq <= 0 || newFreq > 10) {
		_freq = 42;
	}
	else {
		_freq = newFreq;
	}
}

int Processor::getCores() {
	return _cores;
}

void Processor::setCores(int newCores) {
	if (newCores <= 0 || newCores > 50) {
		_cores = 8;
	}
	else {
		_cores = newCores;
	}
}

int Processor::getTDP()
{
	return _tdp;
}

void Processor::setTDP(int newTDP) {
	_tdp = newTDP;
}

void Processor::toString() {
	cout << "toString From Processor:" << getItemId() << " " << getPrice()
		<< " " << getName() << " " << getDescription() << " Частота:"
		<< getFreq() << "  Кол-во ядер:" << getCores() 
		<< "  Тепловыделение:" << getTDP() << "\n";
}