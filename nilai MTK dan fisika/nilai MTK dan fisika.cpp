
#include <iostream>
using namespace std;

int main()
{

	int nilaiMatematika, nilaiFisika, nRerata;
	string status;

	cout << "masukan nilai matematika : ";
	cin >> nilaiMatematika;

	cout << "masukan nilai fisika : ";
	cin >> nilaiFisika;

	nRerata = (nilaiMatematika + nilaiFisika) / 2;

	if (nRerata > 60) {
		status = "LULUS";

	}

	else if (nilaiMatematika > 70) {
		status = "LULUS";

	}

	else {
		status = "TIDAK LULUS";
	}

	cout << "nilai MTK : " << nilaiMatematika << endl;
	cout << "nilai Fisika : " << nilaiFisika << endl;
	cout << "Rata-rata nilai : " << nRerata << endl;
	cout << "statusnya adalah : " << status << endl;

	return 0;

}

