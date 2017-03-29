#include<iostream>
#include"elo.h"

void elo::setK(float a) {
	K = a;
	return;
}
void elo::setRa(float a) {
	Ra = a;
	return;
}	
void elo::setRb(float a) {
	Rb = a;
	return;
}
void elo::setSa(float a) {
	if(a==0) {
		Sa = 0;
		Sb = 1;
	} else if(a==0.5) {
		Sa = 0.5;
		Sb = 0.5;
	} else {
		Sa = 1;
		Sb = 0;
	}
	return;
}
int elo::getNewRa() {
	setEa();
	Ra += K*(Sa-Ea);
	return (int)Ra;
}
int elo::getNewRb() {
	setEb();
	Rb += K*(Sb-Eb);
	return (int)Rb;
}
void elo::setEa() {
	Ea = 1/(1+pow(10, (Rb-Ra)/400));
	return;
}
void elo::setEb() {
	Eb = 1/(1+pow(10, (Ra-Rb)/400));
	return;
}
