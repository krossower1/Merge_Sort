#include "pch.h"
#include "mergesort.h"

/**
* @brief The main body of the program, removing it shows more in-depth test results
*
**/

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    
    vector<int> a = { 4, 12, 67, 24, 547653, 19, 2, -5, -1, 0, 67, -1  };
    vector<double> b = { 4.1, 12.3, 67, 24.12, 54.999, 19.6, 2.2, -5.9, -1, 0, 67, -1 };

    merge_sort<int> lista(a);
    merge_sort<double> lista2(b);

    cout << "Oryginalny zbior: " << endl;

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    cout << "Posortowany zbior: " << endl;

    lista.mergesort();
    lista.print();

    cout << endl;

    cout << "Oryginalny zbior: " << endl;

    for (int i = 0; i < b.size(); i++)
        cout << b[i] << " ";
    cout << endl;

    cout << "Posortowany zbior: " << endl;

    lista2.mergesort();
    lista2.print();

    cout << endl << endl;

    return RUN_ALL_TESTS();
}
