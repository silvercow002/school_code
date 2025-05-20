#include "cmu.h"
using namespace std;

void CMU::Student::play() {
	cout << this->name << " is playing in CMU!" << endl;
}


void CMU::Student::study() {
	cout << this->name << " is studying hard in CMU!" << endl;
}


void CMU::Professor::teach() {
	cout << this->name << " is teaching in CMU!" << endl;
}


void CMU::Professor::research() {
	cout << this->name << " is doing research in CMU!" << endl;
}


void CMU::Professor::meeting() {
	cout << this->name << " is in a meeting in CMU!" << endl;
}