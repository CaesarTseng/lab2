#include<iostream>
#include<cmath>

using namespace std;

class elo {
	public:
		void setK(float a);
		void setRa(float a);
		void setRb(float a);
		void setSa(float a);
		int getNewRa();
		int getNewRb();
	private:
		void setEa();
		void setEb();
		float K, Ra, Rb, Ea, Eb, Sa, Sb;
};
