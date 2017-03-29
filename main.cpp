#include<iostream>
#include<cstdlib>
#include<fstream>
#include"elo.h"

using namespace std;

int main()
{
	elo e;
	int i, j, k;
	float d;
	ifstream inFile("file.in", ios::in);
	if(!inFile) {
		cerr << "Failed opening" << endl;
		exit(1);
	}
	ofstream outFile("file.out", ios::out);
	if(!outFile) {
		cerr << "Failed opening" << endl;
		exit(1);
	}
	inFile >> i >> j >> k;
	e.setK(i);
	e.setRa(j);
	e.setRb(k);
	outFile << j << "\t" << k << endl;
	while(inFile >> d) {
		e.setSa(d);
		outFile << e.getNewRa() << "\t" << e.getNewRb() << endl;
	}
	return 0;
}
