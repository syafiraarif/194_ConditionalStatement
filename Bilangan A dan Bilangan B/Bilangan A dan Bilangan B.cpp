// 
#include <iostream>
using namespace std;

int main()
{
	int nbilA, nbilB;
	string status;

	srand(time(0));

	nbilA = rand() % 6;
	nbilB = rand() % 2;

	if (nbilA == nbilB) {
		status = "sama besar";

	}
	else if (nbilA > nbilB) {
		status = "bilangan A lebih besar dari bilangan B";
	}

	else {
		status = "bilangan A lebih kecil dari bilangan B";
	}

	cout << "bilangan pertama adalah = " << nbilA << endl;
	cout << "bilangan kedua adalah = " << nbilB << endl;
	cout << "statusnya adalah = " << status << endl;

	return 0;




}

