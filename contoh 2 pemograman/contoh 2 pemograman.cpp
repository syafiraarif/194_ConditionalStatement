// 

#include <iostream>
using namespace std;

int main()
{
    int nbilangan;
    string status; 

    srand(time(0));

    nbilangan = rand() % 6;

    if (nbilangan % 2 == 0) {
       
        status = "genap";
    }
    else {
        status = "ganjil";
    }
    cout << "bilanganya adalah = " << nbilangan << endl;

    cout << "statusnya adalah = " << status << endl;
    return 0;
    
}

//