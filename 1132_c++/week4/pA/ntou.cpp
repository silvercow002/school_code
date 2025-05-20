#include "ntou.h"
using namespace std;
//using namespace NTOU;

void NTOU::Student::play() {
	cout << this->name << " is playing in NTOU!" << endl;
}
/* we can also use the following way if we use namespace NTOU: 

void Student::play() {
	cout << this->name << " is playing in NTOU!" << endl;
}
*/


void NTOU::Student::study() {
	cout << this->name << " is studying hard in NTOU!" << endl;
}


void NTOU::Professor::teach() {
	cout << this->name << " is teaching in NTOU!" << endl;
}


void NTOU::Professor::research() {
	cout << this->name << " is doing research in NTOU!" << endl;
}


void NTOU::Professor::meeting() {
	cout << this->name << " is in a meeting in NTOU!" << endl;
}